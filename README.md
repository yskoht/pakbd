
# QMK firmware for pakbd

## Install

```
$ git clone https://github.com/qmk/qmk_firmware.git
$ cd qmk_firmware
$ make git-submodule
$ git submodule add https://github.com/yskoht/pakbd.git keyboards/pakbd
```

## Usage

```
$ make pakbd:rev3
$ make pakbd:rev3:avrdude
```

