#!/bin/bash
wget -P /tmp https://github.com/Speedmob/alx-low_level_programming/blob/master/0x18-dynamic_libraries/ezmoney.so
export LD_PRELOAD=/tmp/ezmoney.so
