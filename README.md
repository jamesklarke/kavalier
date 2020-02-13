# Kavalier

[![Build Status](https://travis-ci.com/jamesklarke/kavalier.svg?branch=master)](https://travis-ci.com/jamesklarke/kavalier)

Kavalier is a software library for publishing and subscribing to data on a network. It is intended for use in research, to make data collection from bespoke sensing systems quick and easy.

## Getting Started

To install kavalier it is currently required to build from source. Future versions will be released as Debian packages.

### Requirements

To compile, you will need:
- CMake version 3.10 (or greater).

### Installation

Clone the repository.
```console
$ git clone https://github.com/jamesklarke/kavalier.git
```

Add a build directory.
```console
$ cd kavalier && mkdir build
```

Run CMake from within the build directory.
```console
$ cd build & cmake ..
```
