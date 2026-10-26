# Frequencies by region

The CC1101 covers roughly 300–348, 387–464, and 779–928 MHz. Transmit only where legal. Set the band in the firmware before any TX. The antenna must match the band.

| Region | Primary bands | Notes |
| --- | --- | --- |
| Europe / UK / Norway / EEA | 433.92 MHz, 868 MHz | Duty cycle limits apply on 868. 915 is not the EU plan. |
| USA / Canada | 315 MHz, 433.92 MHz, 915 MHz | 915 is the usual Sub-GHz choice. |
| Australia / New Zealand | 433.92 MHz | 915 plan exists; confirm local rules. |

## Antenna matching

- One whip = one band.
- SMA male into the shell’s SMA female. RP-SMA does not connect.
- External antenna (K268-01) lets you swap whips. Internal is pocket-friendly but harder to change.

See also [antennas](11-antennas.md) and [hardware](01-hardware.md).

**Own hardware only.** Transmitting outside the legal plan is an administrative offence even if no one’s door opens.
