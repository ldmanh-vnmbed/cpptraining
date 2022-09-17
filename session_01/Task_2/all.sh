#!/bin/bash

cd build/
rm -rf *
cmake ..
make -j8
cd src/
./task_2