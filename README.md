[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Sistem-Pemantauan-Suhu-dan-Kelembapan-Udara-Pada-Tanaman-Hias-Janda-Bolong-Terintegrasi)
![Project-IOT](https://img.shields.io/badge/-ProjectIOT-light.svg?style=flat&logo=arduino&logoColor=white&color=1db86a)
![Bootstrap](https://img.shields.io/badge/-Bootstrap-purple.svg?&logo=bootstrap&logoColor=white)
![Web-Native](https://img.shields.io/badge/-WebsiteNative-grey.svg?&logo=PHP&logoColor=white)
![Bot-Telegram](https://img.shields.io/badge/-BotTelegram-blue.svg?style=flat&logo=telegram&logoColor=white)


# Monitoring-Suhu-Kelembapan-Udara-Tanaman-Hias-Janda-Bolong
Project IoT - Informatika UPN Veteran Jawa Timur

## Support Detail
| Platform/Topic | Bagian | Keterangan |
| --- | --- | --- |
| Software (Website) | Front-End | PHP native + Bootstrap |
| Software (ThingSpeak) | Public | 2 Field Channel (Graphic-1, Graphic-2), 2 Widget (Numeric Display) |
| Software (Arduino IDE) | Library | Arduino Low Power, ThingSpeak, DHT Sensor Library, WiFi, CTBot |
| Hardware | Komponen Mekatronika | Nodemcu, Kabel Jumper (Female-Female), Sensor DHT22, Casing |

<br>

## Environment
1. Download Arduino IDE
```bash
https://www.arduino.cc/en/software
```
2. Cantumkan Boards Manager Urls
```bash
https://arduino.esp8266.com/stable/package_esp8266com_index.json
```
3. Setting Board di Arduino IDE
   <ul>
      <li>Cara: klik Boards Manager -> ESP8266 Boards -> NodeMCU 1.0(ESP-12E Module)</li>
   </ul>
4. Setting Port di Arduino IDE
   <ul>
      <li>Cara: klik Port -> Pilihkan sesuai port device anda (dapat anda lihat di device manager)</li>
   </ul>
5. Install Library di Arduino IDE
   <ul>
      <li>Cara: klik Tools -> Manage Libraries -> Install Library sesuai dengan yang ada di tabel Support Detail</li>
   </ul>
