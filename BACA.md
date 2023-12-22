[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Sistem-Pemantauan-Suhu-dan-Kelembapan-Udara-Pada-Tanaman-Hias-Janda-Bolong-Terintegrasi)
![Project-IOT](https://img.shields.io/badge/Project-Bot-%2DWeb%20of%20Things-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)


# Monitoring-Suhu-Kelembapan-Udara-Tanaman-Hias-Janda-Bolong
<strong>Proyek Tim - Informatika UPN Veteran Jatim</strong><br>
Proyek ini sangat erat kaitannya dengan teknologi pertanian, dimana alat ini digunakan untuk memonitoring perubahan suhu udara dan kelembaban udara di lingkungan sekitar tanaman janda bolong secara real time dari jarak jauh kapanpun dan dimanapun. Alat ini dilengkapi dengan antarmuka berbasis Bot of Things (BoT) yang bertujuan untuk memudahkan pengguna dalam merawat tanaman hias tersebut. Janda bolong merupakan tanaman dari suku Araceae atau talas-talasan yang dapat bertahan hidup secara optimal pada suhu 23-30°C dan kelembaban udara kurang dari 40%.

<br><br>

## Fitur / Kerangka Kerja / Alat
| Media | Deskripsi |
| --- | --- |
| Platform | ThingSpeak |
| Protokol IoT | HTTP |
| Papan Pengembangan | NodeMCU |
| Editor Kode | Arduino IDE & Visual Studio Code |
| Telegram | API Bot Telegram |
| Desain Tata Letak | Bootstrap |
| Pustaka Arduino | Arduino Low Power, ThingSpeak, DHT Sensor Library, WiFi, & CTBot |
| Sensor | DHT22 (Air Temperature & Humidity) |
| Komponen Lainnya | Kabel Jumper, Breadboard, & Casing  |

<br><br>

## Unduh & Instal Arduino IDE
```bash
https://www.arduino.cc/en/software
```

<br><br>

## Pengaturan
1. Buka ``` Arduino IDE ``` terlebih dahulu, lalu masuk ke ``` Boards Manager Url ``` dengan cara menyalin tautan berikut:
   
   ```bash
   http://arduino.esp8266.com/stable/package_esp8266com_index.json
   ```
<br>

2. ``` Pengaturan Board ``` di Arduino IDE<br><br>
   • Cara: klik ``` Boards Manager ``` -> ``` ESP8266 Boards ``` -> ``` NodeMCU 1.0 (ESP-12E Module) ```.
   <br><br><br>
3. ``` Pengaturan Port ``` di Arduino IDE<br><br>
   • Cara: klik ``` Port ``` -> Pilih sesuai dengan port perangkat Anda ``` (Anda dapat melihatnya di Device Manager) ```.
   <br><br><br>
4. ``` Instal pustaka ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Manage Libraries ``` -> ``` Install Library ``` sesuai dengan kebutuhan proyek.

<br><br>

## Perancangan Perangkat Keras
<img src="https://user-images.githubusercontent.com/54527592/133961211-2cd3fda2-a9fe-4381-9cca-1816b0ae1f60.jpg">

<br><br>

## Memulai
1. Pastikan anda memiliki komponen elektronik yang diperlukan.
   
2. Pastikan komponen anda telah dirancang sesuai dengan diagram.
   
3. Pastikan komponen terhubung dengan baik ``` (Sesuaikan pengaturan Board dan Port) ```.
   
4. Disarankan untuk ``` membuat akun Platform IoT ``` sekaligus dengan layanannya.
    
5. Pastikan untuk mengubah kode program arduino di bagian ``` Router ``` sesuai dengan perangkat yang anda gunakan.
    
6. Jika anda tidak menerapkan poin 1 dan 2 untuk keperluan pengembangan proyek itu tidak masalah, tetapi harap dicatat bahwa beberapa hal perlu diubah agar dapat berfungsi dengan baik.

7. Pastikan perangkat terhubung ke internet.

8. Pastikan semua Things telah dibuat.

9. Unduh dan ekstrak repositori ini.
   
10. Pindahkan direktori ``` Website-Project ``` ke dalam direktori ``` htdocs ```, yang rinciannya dapat anda lihat sebagai berikut: ``` C:\xampp\htdocs ```.
  
11. Buka ``` XAMPP ```, lalu mulai bagian ``` Apache ```. Hal ini bertujuan untuk dapat mendukung website secara optimal.
   
12. Untuk ``` mengakses situs web ```, buka ``` peramban ``` anda dengan menuliskan:
    ```bash
    localhost/Website-Project/iot-monstera/index.php
    ```
  
13. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<table>
<tr>
<th width="420">Tampilan Produk</th>
<th width="420">Tampilan Website Monitoring</th>
</tr>
<tr>
<td><img src="https://user-images.githubusercontent.com/54527592/133962095-8baa3737-3bf0-4d6b-bc65-c0cff1c37021.jpg" alt="product-view"></td>
<td><img src="https://user-images.githubusercontent.com/54527592/133962162-8856e20d-9e84-43c4-ac4a-0316d2c65004.jpg" alt="monitoring-web-view"></td>
</tr>
</table>
<table>
<tr>
<th colspan="2">Tampilan Bot Telegram</th>
</tr>
<tr>
<td width="420"><img src="https://user-images.githubusercontent.com/54527592/133962195-70e38df7-8e56-422b-ba30-3b42a642c62b.JPG" alt="bot-menu1"></td>
<td width="420"><img src="https://user-images.githubusercontent.com/54527592/133962202-2399d06a-4f97-4335-86b4-4c043d7d1d17.JPG" alt="bot-menu2"></td>
</tr>
</table>

<br>
<strong>Informasi lebih lanjut:</strong> <a href="https://ejournal.upnvj.ac.id/informatik/article/view/3436"><u>Klik Disini</u></a>

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta (c) 2020 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
