# ESP-2432S028 RGB LED Test

This project performs a basic functionality test of the onboard RGB LED available on the **ESP-2432S028** development board using the **ESP-IDF** framework.

## Objective

The purpose of this test is to verify the correct operation of the three RGB LED channels by sequentially activating:

* 🔴 Red
* 🟢 Green
* 🔵 Blue

This project is part of a broader hardware validation and embedded systems learning process using ESP-IDF and embedded software development best practices.

## Hardware

* ESP-2432S028 development board
* USB cable
* ESP-IDF development environment

## Build and Flash

Set the target:

```bash
idf.py set-target esp32
```

Build, flash, and monitor:

```bash
idf.py -p PORT flash monitor
```

Replace `PORT` with your serial port.

## Expected Behavior

After programming the board, the onboard RGB LED will continuously cycle through:

1. Red
2. Green
3. Blue

The serial monitor will display messages indicating the active color.

Example output:

```text
I (315) rgb_test: Starting RGB LED test
I (1315) rgb_test: RED ON
I (2315) rgb_test: GREEN ON
I (3315) rgb_test: BLUE ON
```

## Purpose

This project serves as an initial hardware validation step before developing more advanced applications and cybersecurity experiments on the ESP-2432S028 platform.

