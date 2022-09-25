# Infinitag Wand-Tagger
[![CC BY-NC-SA 4.0][cc-by-nc-sa-shield]][cc-by-nc-sa]

This project was implemented in the course of Halloween and represents an affordable and simple mini laser tagger in the form of a magic wand.

## Hardware

- Arduino Mini Pro
- USB to TTL Dongle

## Write Sketch with Windows

I use a USB2TTL converter to write the sketch to the Arduino Mini Pro.

### Problems with Windows 10

With Windows there were some challenges here.

With Windows 10 the following error message was displayed:

> PL2303HXA PHASED OUT SINCE 2012. PLEASE CONTACT YOUR SUPPLIER.

I found the solution on the following website: 
https://www.connectix.nl/pl2303hxa-phased-out-since-2012-please-contact-your-supplier-solved/

Additionally, I have included the file in the repo in case it is no longer available:
[IO-Cable_PL-2303_Drivers-Generic_Windows_PL2303_Prolific.zip](https://github.com/Infinitag/WandTagger/blob/main/divers/IO-Cable_PL-2303_Drivers-Generic_Windows_PL2303_Prolific.zip)

### Wiring

I did the wiring as follows:

![Wiring details](https://github.com/Infinitag/WandTagger/blob/main/images/ConnectUSBToTTL.png?raw=true)

### Uploading Sketch

When programming from Arduino IDE, press and hold the Reset button during compilation and release it after information about sketch size appears and state changes to “Uploading”. Uploading should begin and succeed.

## License
This work is licensed under a
[Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License][cc-by-nc-sa].

[![CC BY-NC-SA 4.0][cc-by-nc-sa-image]][cc-by-nc-sa]

[cc-by-nc-sa]: http://creativecommons.org/licenses/by-nc-sa/4.0/
[cc-by-nc-sa-image]: https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png
[cc-by-nc-sa-shield]: https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg

## Additional

For more information about the Infinitag System please visit [infinitag.io](http://www.infinitag.io).
