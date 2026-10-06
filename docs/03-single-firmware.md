# Single firmware

Use this if you only want Bruce, Willy, or one other app and you do not care about switching. Skip to [multi-firmware](04-multi-firmware.md) if you want more than one.

## What you need

- Desktop Chrome or Edge. Firefox only works on builds that actually expose WebSerial (recent Firefox does on some platforms; Chrome is the boring reliable choice). Safari has no WebSerial.
- USB-C data cable.
- The board charged enough that it does not brown out mid-flash.

The T-Embed enters download mode on its own when the flasher asks. You do not hold a boot button for the stock web flashers.

## Bruce (most common)

1. Open [bruce.computer](https://bruce.computer/) and use the web flasher, or a current mirror such as the Bruce device page on flash.pingequa.com.
2. Connect. Pick the serial port. On Windows it is a COM port; on Linux `/dev/ttyACM0`; on macOS `/dev/cu.usbmodem…`.
3. Pick the **CC1101** build, not the plain T-Embed build (that one has no Sub-GHz). If the flasher lists Plus separately, pick Plus only on a Plus board.
4. Flash. Erase first if you are leaving factory demo firmware or a broken install. Erase wipes Wi-Fi, RF lists, and Bruce config.
5. Unplug, plug back in, turn it on with the encoder wheel.

Current stable as of early October 2026 was Bruce 1.16.1. Check the release page; do not treat that number as permanent.

Manual equivalent, if the browser path fails:

```bash
pip install esptool
esptool --chip esp32s3 --port /dev/ttyACM0 erase-flash
esptool --chip esp32s3 --port /dev/ttyACM0 write-flash 0x0 Bruce-lilygo-t-embed-cc1101.bin
```

The exact asset name is whatever Bruce tagged for this board in that release. A merged image writes at `0x0`. A split image writes bootloader, partitions, and app at the offsets in the release notes — do not invent offsets.

## Willy Firmware V3

Built for both boards, with nRF24 only on Plus. Releases: [h-RAT/Willy_Firmware_V3_T-Embed_CC1101](https://github.com/h-RAT/Willy_Firmware_V3_T-Embed_CC1101). Same web-flash or esptool flow. Pick the Plus asset on a Plus.

## Factory demo

LilyGO ships a demo from [Xinyuan-LilyGO/T-Embed-CC1101](https://github.com/Xinyuan-LilyGO/T-Embed-CC1101). Useful as a known-good test if a third-party flash leaves you with a black screen. Flash it the same way, confirm the encoder and display, then go back to the firmware you actually want.

## After it boots

- Set the CC1101 band to 868 (or 433.92) before you transmit anything.
- Give Bruce a FAT32 card if you want captures kept.
- Rotary encoder navigates, push selects, side button is back on most builds. Hold the encoder to power off.
