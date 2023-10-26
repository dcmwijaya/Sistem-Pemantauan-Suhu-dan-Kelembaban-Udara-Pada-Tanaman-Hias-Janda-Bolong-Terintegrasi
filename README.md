[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Sistem-Pemantauan-Suhu-dan-Kelembapan-Udara-Pada-Tanaman-Hias-Janda-Bolong-Terintegrasi)
![Project-IOT](https://img.shields.io/badge/-ProjectIOT-light.svg?style=flat&logo=arduino&logoColor=white&color=1db86a)
![Bootstrap](https://img.shields.io/badge/-Bootstrap-purple.svg?&logo=bootstrap&logoColor=white)
![Web-Native](https://img.shields.io/badge/-WebsiteNative-grey.svg?&logo=PHP&logoColor=white)
![Bot-Telegram](https://img.shields.io/badge/-BotTelegram-blue.svg?style=flat&logo=telegram&logoColor=white)


# Monitoring-Suhu-Kelembapan-Udara-Tanaman-Hias-Janda-Bolong
<strong>Team Project - Informatics UPN Veteran Jatim</strong><br>
This project is closely related to agricultural technology, where this tool is used to monitor changes in air temperature and humidity in the environment around widow bolong plants in real time remotely anytime and anywhere. This tool is equipped with a Bot of Things (BoT) based interface that aims to facilitate users in caring for these ornamental plants. Janda bolong is a plant from the Araceae or taro species that can survive optimally at temperatures of 23-30 ° C and air humidity less than 40%.

<br>

## Support Detail
| Platform/Topic | Bagian | Keterangan |
| --- | --- | --- |
| Software (Website) | Front-End | PHP native + Bootstrap |
| Software (ThingSpeak) | Public | 2 Field Channel (Graphic-1, Graphic-2), 2 Widget (Numeric Display) |
| Software (Arduino IDE) | Library | Arduino Low Power, ThingSpeak, DHT Sensor Library, WiFi, CTBot |
| Hardware | Komponen Mekatronika | Nodemcu ESP8266, Kabel Jumper (Female-Female), Sensor DHT22, Casing |

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
      <li>Cara: klik Boards Manager -> ESP8266 Boards -> NodeMCU 1.0(ESP-12E Module).</li>
   </ul>
4. Setting Port di Arduino IDE
   <ul>
      <li>Cara: klik Port -> Pilihkan sesuai port device anda (dapat anda lihat di device manager).</li>
   </ul>
5. Install Library di Arduino IDE
   <ul>
      <li>Cara: klik Tools -> Manage Libraries -> Install Library sesuai dengan yang ada di tabel Support Detail.</li>
   </ul>

<br>

## Perancangan Hardware
![NodeMcu_DHT22](https://user-images.githubusercontent.com/54527592/133961211-2cd3fda2-a9fe-4381-9cca-1816b0ae1f60.jpg)

<br>

## Cara Menerapkan dan Menggunakan Aplikasi
1. Download Repository ini.
2. Pastikan anda memiliki komponen elektronik yang dibutuhkan sesuai tabel Support Detail.
3. Pastikan komponen anda telah dirancang sesuai pada bagian Perancangan Hardware diatas.
4. Pastikan terkoneksi dengan baik (Menyesuaikan settingan Board dan Port).
5. Disarankan untuk membuat akun ThingSpeak beserta Channelnya.
6. Disarankan mengubah code arduino pada bagian ChannelID dan APIKey sesuai ThingSpeak anda.
7. Jika tidak melakukan 2 point diatas (point 2 dan 3) tidak apa-apa.
8. Buatlah bot Telegram (tidak disarankan memakai bot telegram yang sudah ada, karena beresiko crash aktivitas).
9. Ubahlah code arduino pada bagian *ssid (Nama Wifi yang anda gunakan), *password (password Wifi yang anda gunakan), dan BOTtoken (token bot telegram anda).
10. Selesai.

<br>

## Dokumentasi
![GambarAlat3](https://user-images.githubusercontent.com/54527592/133962095-8baa3737-3bf0-4d6b-bc65-c0cff1c37021.jpg)
![MonitoringSuhu](https://user-images.githubusercontent.com/54527592/133962162-8856e20d-9e84-43c4-ac4a-0316d2c65004.jpg)
![Bot_Telegram1](https://user-images.githubusercontent.com/54527592/133962195-70e38df7-8e56-422b-ba30-3b42a642c62b.JPG)
![Bot_Telegram2](https://user-images.githubusercontent.com/54527592/133962202-2399d06a-4f97-4335-86b4-4c043d7d1d17.JPG)

<br>

Catatan : Project ini membutuhkan internet untuk menjalankan aplikasinya.
