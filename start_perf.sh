#!/bin/bash
perf stat -e cpu-clock record -g -o perf.data ./a.out
perf report -g graph -i perf.data
