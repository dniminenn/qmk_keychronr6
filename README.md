# Keychron R6 (community QMK port)

QMK support for the Keychron R6 (ANSI, RGB), reverse-engineered from a retail
unit. Not affiliated with Keychron.

Just the board overlay: drop it into a Keychron QMK fork and build a firmware
that runs wired, Bluetooth, and 2.4GHz, remappable in VIA.

## Build

Copy `keyboards/keychron/r6` into a Keychron QMK fork, then:

```
qmk compile -kb keychron/r6 -km via
```

## Flash

Hold Esc, replug USB, release Esc to enter the bootloader (`lsusb` shows
`342d:dfa0`), then:

```
wb32-dfu-updater_cli -t -s 0x8000000 -D keychron_r6_via.bin
wb32-dfu-updater_cli -R
```

## VIA

This board isn't in VIA's built-in list, so load the definition by hand. In VIA
(usevia.app), open Settings and turn on the Design tab, then load
`keyboards/keychron/r6/via/keychron_r6_via.json` from this repo. Once loaded,
the Configure tab remaps keys and lighting live, including the Bluetooth,
2.4GHz, and battery keycodes.

## Defaults

- Solid green backlight at 75%.
- Left/right Shift are Space Cadet: tap for a parenthesis, hold for Shift.
- Caps Lock is Shift when held, Caps Lock when tapped.
- The Num Lock and Caps Lock keys light up while active, color configurable
  from the Launcher, which also does per-key RGB.
