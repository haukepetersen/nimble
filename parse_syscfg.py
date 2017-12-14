#!/usr/bin/python3
# -*- coding: utf-8 -*-

# Copyright (C) 2017 Freie Universität Berlin
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
# 02110-1301 USA
#
# Author: Hauke Petersen <hauke.petersen@fu-berlin.de>

import argparse
import sys
import os
import yaml
import re

LINE_LEN = 80

def dump_line(init, prefix, text):
    line = init
    res = ""
    for word in text.split(" "):
        if (len(line) + len(word)) >= LINE_LEN:
            res += "{}\n".format(line)
            line = prefix
        line += " {}".format(word)
    return "{}{}\n".format(res, line)


def get_doxy(desc):
    desc = re.sub("\. +\(0/1\)", " [0,1]", desc)
    if desc[-1] == "\n":
        desc = desc[:-1]

    res = "\n/**\n"
    for i, line in enumerate(desc.split(".", 1)):
        line = line.strip()
        if line == "":
            continue
        if line[-1] == "\n":
            line = line[:-1]

        if i == 0:
            res += dump_line(" * @brief  ", " *         ", line)
        if i == 1:
            res += " *\n"
            line = line.replace("  ", "\n")
            for row in line.split("\n"):
                row = row.strip()
                if row == "":
                    continue
                res += dump_line(" *", " *", row)

    res += " */\n"
    return res


def main(args):
    for f in args.input:
        test = yaml.load(open(f, 'r'))
        base = test['syscfg.defs']
        for name in sorted(base):
            doc = get_doxy(base[name]['description'])
            print("{}#define {:<32}({})".format(doc, name, base[name]['value']))

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("input", nargs="+",help="Target board")
    args = p.parse_args()
    main(args)
