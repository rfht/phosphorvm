# PhosphorVM

PhosphorVM is a very experimental runner for programs generated by GameMaker:Studio (without the YoYo Compiler).

## Building (Unix-like)

You will need CMake and a C++17 compiler.  

This *requires* `mmap` currently but fallbacks will be implemented for platforms that don't support it. No Windows yet, sorry!

```
mkdir build
cd build
cmake ..
make -j
```

## What does this mean?

Most (non YYC) GameMaker:Studio games are compiled into a `data.win` file, which contains game assets and is interpreted by the GameMaker:Studio runner. PhosphorVM aims to be a replacement for this runner.
 
Originally, Phosphor was meant to be a full GM:S compatible toolchain (like ENIGMA) but the goal has changed.

## Why?

It's pretty fun and it's not too unreasonably complex for a project. If you get tired working on something you can spend time on another part of the software... and I love VMs far too much.

## Can I run any game with it?

Someday, hopefully, but right now not at all.

## *When* can I run any game with it?

Probably not soon: A runner requires a lot of things to be implemented to even render a single frame of a game.

The GM:S bytecode has lacking documentation and is complex to implement. You have to parse all assets from files. You need a graphics backend to render all the stuff and a good bit of the builtin functions, etc.

Furthermore, different GM:S versions generate incompatible `data.win` so retrocompatibility will be a problem.

## Can I use it to extract resources from a game?

No, the internal unpacker is only meant to prepare execution.

## How will performance be?

There will be a lot of potential for optimization around the VM, builtin function interface and graphics rendering.

Furthermore, because there is no official bytecode documentation, we can only guess good ways to implement certain things.

## Is this legal?

Yes. PhosphorVM only parses and executes `data.win` files: It's a clean-room implementation of a GM:S runner, much like what Wine or ReactOS do.

## Can I contribute?

At the time, the architecture is moving too quickly and the VM is the current blocker. So, not really, thank you though :)