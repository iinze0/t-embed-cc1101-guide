# Troubleshooting

## No serial port

- Cable is charge-only. Try another.
- Port is on a USB hub that drops CDC. Plug into the machine.
- Linux: your user is not in `dialout` / `uucp`. `sudo usermod -aG dialout $USER`, then log out.
- Chrome has no permission for the port. Click the lock icon in the address bar and allow the serial device.
- Board is off. Click the encoder to wake it, then reconnect.

## Flash starts then dies at the same percent

Brown-out. Charge for 20 minutes, try again, preferably with the battery in. A very long cable does this too.

## Black screen after a flash

- Wrong target (plain T-Embed, or a Plus image on a non-Plus, or the reverse). Reflash the matching asset.
- Image was a raw app `.bin` written at `0x0`. That is not a full image. Use the launcher’s installer, or the merged file the project tells you to write at `0x0`.
- Backlight pin differs and the panel is actually on with no backlight. Shine a light at the panel at an angle. If you can see a menu, it is backlight, not a dead flash.
- Factory demo from LilyGO is the known-good image. If that is also black, it is hardware or the cable never really flashed.

## Launcher boots, app slot reboots straight back

The binary is too big for the slot, or it was built for another board and panics on the display init. Try another slot only if the first refuse was size. Otherwise get the right asset.

## Stuck inside an app, launcher never comes back

You flashed the app over the launcher (single-firmware mode), or the app overwrote the bootloader. Power-cycle. If you still land in the app, the launcher is gone — web-flash the launcher again. Slots may need to be reinstalled after a full erase; try without erase first.

## Bruce loses Wi-Fi and RF config every boot

Partition table has no LittleFS region. See the pre-1.1 fix in [updates](05-updates.md). Also happens if you install Bruce as a single image that uses a different table than the launcher.

## Sub-GHz menu empty or TX does nothing

- Band switch GPIOs not toggled: set 868 or 433.92 in the app before TX.
- Plus binary on a non-Plus, or CC1101 binary that does not match the Plus pin map.
- Antenna not screwed on, or a 915 MHz whip on 868.
- You are on the plain T-Embed build with no CC1101 support.

## nRF24 missing

Expected on the original CC1101. On Plus, you flashed a build that was not compiled with the Plus nRF24 pins. Willy and Bruce both need the Plus target for that radio.

## NFC reads nothing

PN532 is 13.56 MHz ISO14443. It will not read ISO15693 (some toys, some access cards) and it will not read 125 kHz. Hold the tag flat on the NFC area, not on the antenna end.

## Card not detected

- exFAT. Reformat FAT32.
- Card half-clicked. Reseat it.
- USB disk mode still mounted on the PC. Eject, then leave USB mode on the device.

## Encoder reversed or side button dead in one app only

That app’s board header is wrong. Not a hardware fault if the launcher encoder works. Use the other build.
