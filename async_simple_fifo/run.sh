#!/bin/bash

# Step 1: Compile and build the simulation using Verilator 
verilator --binary -j 0 -Wall \
    fifo.v fifo_tb.v \
    --Mdir fifo_tb \
    --top-module fifo_tb \
    -timing \
    -CFLAGS "-std=c++20" \
    --trace 

# Check if Verilator compilation succeeded 
if [ $? -ne 0 ]; then 
    echo "Verilator compilation failed" 
    exit 1 
fi 

echo "Compilation successful" 

# Step 2: Run the simulation 
./fifo_tb/Vfifo_tb 

# Check if simulation succeeded 
if [ $? -ne 0 ]; then 
    echo "Simulation failed" 
    exit 1 
fi 

echo "Simulation completed successfully" 

# Step 3: Check if waveform was generated 
if [ ! -f dump.vcd ]; then 
    echo "Error: dump.vcd was not generated" 
    exit 1 
fi 

echo "dump.vcd generated successfully" 

# Step 4: Open waveform in GTKWave 
gtkwave dump.vcd &
