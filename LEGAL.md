# Read this before you flash anything

This repository is a hardware and install guide for the LilyGO T-Embed CC1101 and T-Embed CC1101 Plus. It is not a pentest playbook, and it will not grow one.

Bruce, Willy, Flipper-style ports, Marauder-style builds and similar firmware expose menus for Sub-GHz, NFC, infrared, Wi-Fi, Bluetooth and USB. Those menus are legal to study on equipment and networks you own, or where the owner has given you written permission. The same button is a crime when the target is someone else's.

A disclaimer in a repo does not make the act legal. "For educational purposes" is not a defence in a Norwegian court.

## What this repo will not contain

No capture/replay steps, no rolling-code bypass, no gate or car-fob opening, no NFC clone of an access card you were not issued, no deauth, evil twin, portal or handshake guide, no jammer settings, no BadUSB payload that types itself into a machine you do not own. Those are methods for unauthorised access. They are not added behind a warning banner.

Official firmware projects already document their own menus. Use those, on your own lab.

## What can happen if you use it on something that is not yours

Norway, Penal Code (straffeloven) chapter 21. Unofficial English text is on Lovdata; the Norwegian text wins.

- Section 204, intrusion into a computer system by bypassing a protection or other illicit means: fine or up to 2 years. A Wi-Fi network, a badge reader, a car immobiliser and a gate controller are computer systems.
- Section 205, violation of the protection of a computer system, including interfering with its operation: fine or up to 2 years. Jamming a fob, deauthing clients, or locking a reader fits here more often than people expect.
- Section 201, producing or possessing passwords, or a program particularly suitable for crimes against computer systems, with intent to commit a criminal act: fine or up to 1 year. A saved replay of someone else's fob, or a cloned UID kept to get through a door, is authentication material.
- Section 202, using another person's identity to gain or to cause loss: fine or up to 2 years. A cloned work badge is this as well as 204.
- Section 205 on secret interception of communications you are not part of: fine or up to 2 years. Recording someone else's remote or radio link can be argued here.
- Section 321 and 322, theft and aggravated theft, if the point of the clone or replay was to take a car, a bike, or anything else. Aggravated theft goes well past the cyber sections.
- Section 351, fraud, if access was used to obtain a service or money.
- Section 330 and around, vandalism, if a jam or a bad write bricked a lock, a car, or a reader.

Ekomloven and NKOM rules sit on top of that. Transmitting outside the ISM plan, over power, or as interference is an administrative case and a fine even when nobody's door opened. 915 MHz is not a Norwegian plan. Duty cycle on 868 still applies on a lab bench if the antenna is radiating.

Courts have already sent people to prison for unauthorised access alone. In HR-2026-1908-A the Supreme Court set 120 days for a run of account intrusions under section 204, with no theft of money. A gate or a car is not treated more kindly than a Snapchat account.

Aggravating facts that move a case from a fine to custody: more than one victim, a repeated pattern, anything saved to the SD card, selling a clone, doing it at a workplace, or doing it near a car. The SD card and the flash are the evidence. Deleting the file after does not wipe the wear-levelled copy.

Outside Norway the same acts are usually unauthorised-access, interception, and computer-misuse offences (CFAA in the US, Computer Misuse Act in the UK, national cybercrime laws elsewhere). Customs can also seize the device.

## What is actually fine

- Flashing your own board.
- Reading and writing tags you bought.
- Capturing remotes you own, then replaying them at your own gate.
- Wi-Fi and BLE tests on an AP you control, isolated from neighbours.
- IR against your own TV.
- nRF24 between two modules you own.

If you cannot point at the owner and the permission, do not press transmit.

This is not legal advice. If a case is already open, talk to a lawyer, not to a GitHub README.
