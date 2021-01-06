#!/bin/bash

curl -L -o DxLib.tgz $1

# Extract & Overwrite
tar -xvf DxLib.tgz
cp -r dest/* DxLibForHTML5

# Clean up
rm -r dest
rm DxLib.tgz