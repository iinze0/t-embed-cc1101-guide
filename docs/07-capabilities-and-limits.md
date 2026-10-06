# What the firmware can do, and where the line is

Bruce, Willy and the Flipper-style port ship menus in these groups. Names only. No procedure.

| Group | On this hardware | Legal use | Not legal |
| --- | --- | --- | --- |
| Sub-GHz (CC1101) | Both boards. 433.92 and 868 in Norway | Sniff and replay your own remotes, your own lab TX | Someone else's fob, gate, car, alarm, sensor |
| nRF24 | Plus only, and only on a Plus build | Two modules you own | A neighbour's link, a mouse/keyboard you do not own |
| NFC (PN532) | Both. 13.56 MHz ISO14443, not 125 kHz, not ISO15693 | Tags you bought, cards issued to you | A badge, hotel card, or payment card that is not yours to copy |
| IR | Both | Your own TV and AC units | Not a crime in itself; still do not blind a sensor you do not own |
| Wi-Fi / BLE | Both, the ESP32-S3 radio | AP and clients you control, isolated | Deauth, evil twin, portals, handshake capture on a network you do not administer |
| USB HID | Both, when that app enables it | A machine you own, payload you wrote | A locked workstation that is not yours |

Rolling-code remotes (many cars, some gates) are designed so a captured frame does not open the next time. Bypassing that is the same offence as opening the lock, not a radio experiment.

Jamming is not a feature this guide will configure. Continuous carrier on 433 or 868 is interference under the radio rules even before a door fails.

Saved captures on the microSD are the thing a search finds. Treat the card like a notebook with your name on it.

Penalties and the sections they sit under are in [LEGAL.md](../LEGAL.md). Read that before the first transmit, not after.
