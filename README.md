## Pre-requisites

Make sure these are installed

- XCode Command Line tools
- avr-gcc
- avrdude

## Configuration

Configure `.vscode/c_cpp_properties.json` to point to the installed `avr-gcc` binary.

## Building

```sh
$ make
```

## Uploading

```sh
$ make upload
```
