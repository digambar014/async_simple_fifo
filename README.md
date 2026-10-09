# Asynchronous FIFO

A simple asynchronous FIFO in Verilog for transferring data safely between two independent clock domains.

## Overview

The FIFO uses separate read and write clocks with synchronised pointers, allowing a producer and consumer running at different rates to exchange data without violating setup/hold timing.

## Files

| File | Description |
|------|-------------|
| `fifo.v` | Asynchronous FIFO |
| `fifo_tb.v` | Testbench |
| `run.sh` | Simulation script |

`Result Simulation.png` shows the simulation result.

## Running

```bash
./run.sh
```

## License

MIT - see [LICENSE](LICENSE).
