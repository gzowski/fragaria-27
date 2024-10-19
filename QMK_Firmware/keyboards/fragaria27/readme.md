# Fragaria-27

27 Key Macropad

* Keyboard Maintainer: [James Gzowski](https://github.com/gzowski)
* Hardware Supported: Embedded RP2040
* Build Guide: [Somei70](https://github.com/gzowski/fragaria-27)

Make example for this keyboard (after setting up your build environment):
	
    make fragaria27:default

Flashing example for this keyboard:

    make fragaria27:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the PCB, if using a RP2040 press repeatidly to enter boot mode.
* **Hold down boot loader button on MCU** Hold down the boot loader button on the MCU while plugging in the keyboard
