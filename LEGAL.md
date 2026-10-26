# Read this before you flash anything

This repository is a hardware and install guide for the LilyGO T-Embed CC1101 and T-Embed CC1101 Plus. It is not a pentest playbook, and it will not grow one.

Bruce, Willy, Flipper-style ports, Marauder-style builds and similar firmware expose menus for Sub-GHz, NFC, infrared, Wi-Fi, Bluetooth and USB. Those menus are legal to study on equipment and networks you own, or where the owner has given you written permission. The same button is a crime when the target is someone else's.

A disclaimer in a repo does not make the act legal. "For educational purposes" is not a defence in most courts.

## What this repo will not contain

No capture/replay steps for systems you do not own, no rolling-code bypass, no gate or car-fob opening of someone else's property, no NFC clone of an access card you were not issued, no deauth, evil twin, portal or handshake guide, no jammer settings, no BadUSB payload that types itself into a machine you do not own. Those are methods for unauthorised access. They are not added behind a warning banner.

Official firmware projects already document their own menus. Use those, on your own lab.

## What can happen if you use it on something that is not yours

Unauthorised access, interception, and computer misuse are criminal offences in almost every country. Examples:

- **United States** — Computer Fraud and Abuse Act (CFAA). Unauthorised access or exceeding authorised access. Fines and prison. A Wi-Fi network, badge reader, car immobiliser, or gate controller counts.
- **United Kingdom** — Computer Misuse Act 1990. Unauthorised access, unauthorised access with intent, and unauthorised acts with intent to impair.
- **European Union / EEA** — National laws implementing the EU Cybercrime Directive and Budapest Convention. Unauthorised access, interception, and data interference.
- **Canada** — Criminal Code sections on unauthorised use of a computer and mischief in relation to data.
- **Australia** — Criminal Code Act 1995 (Division 477). Unauthorised access, modification, or impairment of data.
- **Norway** — Penal Code (straffeloven) chapter 21, sections 201–205. Courts have given prison for access alone (example: HR-2026-1908-A).
- **Most other countries** — Equivalent laws. Customs can also seize the device.

Aggravating facts that often raise the penalty: more than one victim, a repeated pattern, anything saved to the SD card, selling a clone, doing it at a workplace, or doing it near a vehicle. The SD card and the flash are the evidence. Deleting the file after does not wipe the wear-levelled copy.

Radio rules sit on top of that. Transmitting outside the legal ISM plan for your country, over power, or as harmful interference is an administrative offence (and sometimes a crime) even when nobody's door opened. Duty-cycle limits apply on many bands. Set the band correctly before any transmit.

## What is actually fine

- Flashing your own board.
- Reading and writing tags you bought.
- Capturing remotes you own, then replaying them at your own gate.
- Wi-Fi and BLE tests on an AP you control, isolated from neighbours.
- IR against your own TV.
- nRF24 between two modules you own.

If you cannot point at the owner and the permission, do not press transmit.

This is not legal advice. Laws change and enforcement differs. If a case is already open, talk to a lawyer, not to a GitHub README.
