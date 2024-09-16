# 42-libft-Library-Forty-Two

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)

## Introduction

A [42 School](https://www.42network.org/) project to create a static library of useful clang functions. The library includes our own implementations of many c standard library functions and some additional ones. The library will be expanded as new functions are written.

## Installation

Git clone the repository:

```shell
https://github.com/TimHopg/libft_new.git
```

Run `make` from within the directory to archive the `libft.a` static library file.

`make clean` will remove object files.

`make fclean` will remove library and object files.

## Usage

To use include the `libft.a` file in your project and include the `libft.h` header in your source code.

Compile as follows:

``` shell
cc main.c -L -lft -o main
```
