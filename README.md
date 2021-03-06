# ![Logo](logo.png) PhosphorVM

PhosphorVM is a WIP runner for programs generated by GameMaker:Studio.

## Building (Unix-like)

A recent gcc or clang version will work, as long as it supports C++17.  
Compiling with clang is highly recommended for now.  
This cannot be built on Windows (yet).

```
mkdir build
cd build
CC=clang CXX=clang++ cmake ..
make -j
```

## Usage

`cd` into the game directory (which contains the `data.win` file) and run `phosphorvm` from there.  
Currently, PhosphorVM looks for a `data.win` file in the working directory. It looks for and executes some hardcoded entry points used for testing currently. It will also print debug info, such as chunk data, program disassembly, etc.

## What is this?

PhosphorVM will be able to execute games compiled with GameMaker:Studio (without the YoYoCompiler) from their `data.win` file.

## Status

PhosphorVM cannot run any game yet, and it will not be able to until a long time.

## Legality

PhosphorVM only parses and executes `data.win` files, which makes it a clean-room implementation, much like Wine or ReactOS.

## Contributing

I won't accept contributions for now, sorry (unless fairly trivial, e.g. compile flags, typos, etc.)