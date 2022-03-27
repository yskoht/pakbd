
# QMK firmware for pakbd

## Install

```
$ git clone https://github.com/qmk/qmk_firmware.git
$ cd qmk_firmware
$ qmk setup
$ git submodule add https://github.com/yskoht/pakbd.git keyboards/pakbd
```

## Usage

```
$ qmk clean --all
$ qmk --verbose compile -kb pakbd -km rev3
$ qmk --verbose flash -kb pakbd -km rev3
```
