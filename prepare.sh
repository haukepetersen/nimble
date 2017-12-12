#!/bin/sh

# Copyright (C) 2017 Freie Universität Berlin
#
# Brief:    This script is used to extract the NimBLE stack from the Apache
#           Mynewt repository and transform it into a structure which simplifies
#           the usage of the stack into RIOT
#
# Author:   Hauke Petersen <hauke.petersen@fu-berlin.de>

# Configure environment
NIMBLE_BASE="net/nimble"
MYNEWT_TMP="/tmp/mynewt1234"
# INC=${PWD}/include          # TODO: sed over nimble code to make includes start with nimble/
# SRC=${PWD}/src

# TMP
MYNEWTBASE="/home/hauke/dev/mynewt/mynewt"

if [ -z ${MYNEWTBASE} ]; then
    echo "MYNEWTBASE is not defined"
fi

# Copy nimble to this Repo
cp -R ${MYNEWTBASE}/${NIMBLE_BASE}/. ${PWD}
