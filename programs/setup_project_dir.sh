#!/bin/bash

BUILD_THINGS_DIR = ../build_things

PROJ_DIR = $1

if [ "$1" != "" ]; then
    echo "project dir name = $1"
else
    echo "Please specify a project dir name"
fi

echo -n "making project dir $PROJ_DIR"
mkdir PROJ_DIR

echo -n "coping contents of $BUILD_THINGS_DIR to $PROJ_DIR"
cp $BUILD_THINGS_DIR/* $PROJ_DIR

