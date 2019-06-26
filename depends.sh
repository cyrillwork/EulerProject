#!/bin/bash

mkdir ./depends

cd ./depends
git clone http://github.com/cyrillwork/BigNumber.git

cd ./BigNumber
qmake
make