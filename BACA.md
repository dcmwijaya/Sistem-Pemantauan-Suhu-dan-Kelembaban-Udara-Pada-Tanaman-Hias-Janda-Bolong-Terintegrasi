[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Sistem-Pemantauan-Suhu-dan-Kelembapan-Udara-Pada-Tanaman-Hias-Janda-Bolong-Terintegrasi)
![Project-IOT](https://img.shields.io/badge/Project-Bot-%2DWeb%20of%20Things-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Monitoring-Suhu-Kelembapan-Udara-Tanaman-Hias-Janda-Bolong
<strong>Proyek Tim - Informatika UPN Veteran Jatim</strong><br><br>
Proyek ini sangat erat kaitannya dengan teknologi pertanian, dimana alat ini digunakan untuk memonitoring perubahan suhu udara dan kelembaban udara di lingkungan sekitar tanaman janda bolong secara real time dari jarak jauh kapanpun dan dimanapun. Alat ini dilengkapi dengan antarmuka berbasis Bot of Things (BoT) yang bertujuan untuk memudahkan pengguna dalam merawat tanaman hias tersebut. Janda bolong merupakan tanaman dari suku Araceae atau talas-talasan yang dapat bertahan hidup secara optimal pada suhu 23-30°C dan kelembaban udara kurang dari 40%.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | NodeMCU V3 ESP8266 Lolin |
| Editor Kode | • Arduino IDE<br>• Visual Studio Code |
| Dukungan Aplikasi | Bot Telegram |
| Driver | USB-Serial CH340 |
| Platform IoT | ThingSpeak |
| Protokol Komunikasi | • HTTP<br>• MTProto |
| Arsitektur IoT | 4 Lapisan |
| Kerangka Kerja | Bootstrap |
| Bahasa Pemrograman | • C/C++<br>• JavaScript<br>• PHP |
| Pustaka Arduino | • Arduino Low Power<br>• ThingSpeak<br>• DHT Sensor Library<br>• WiFi<br>• CTBot |
| Sensor | DHT22: Air Temperature & Humidity (x1) |
| Komponen Lainnya | • Kabel Mikro USB - USB tipe A (x1)<br>• Kabel jumper (1 set)<br>• Kotak casing (x1)<br>• Adaptor DC 5V (x1) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>

2. USB-Serial CH340

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_Driver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<img width="840" src="https://github.com/devancakra/Sistem-Pemantauan-Suhu-dan-Kelembapan-Udara-Pada-Tanaman-Hias-Janda-Bolong-Terintegrasi/assets/54527592/08eba2a3-35ae-458d-a896-c249854c938e">

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek dengan cara klik ``` File ``` -> ``` Open ``` :  

   <table><tr><td width="810">
      
      ``` monitoring_suhu.ino ```

   </td></tr></table><br>
   
2. Isi ``` Url Pengelola Papan Tambahan ``` di Arduino IDE 

   <table><tr><td width="810">
   
      Klik ``` File ``` -> ``` Preferences ``` -> masukkan ``` Boards Manager Url ``` dengan menyalin tautan berikut :
      
      ```
      http://arduino.esp8266.com/stable/package_esp8266com_index.json
      ```

   </td></tr></table><br>
   
3. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">

      Cara mengatur board ``` NodeMCU V3 ESP8266 Lolin ```
            
      </th></tr>
      <tr><td>
         
      • Klik ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` esp8266 ```. 
      
      • Kemudian klik ``` Tools ``` -> ``` Board ``` -> ``` ESP8266 Boards ``` -> ``` NodeMCU 1.0 (ESP-12E Module) ```.

      </td></tr>
   </table><br>
   
4. ``` Ubah Kecepatan Papan ``` di Arduino IDE 

   <table><tr><td width="810">
   
      Klik ``` Tools ``` -> ``` Upload Speed ``` -> ``` 9600 ```

   </td></tr></table><br>
   
5. ``` Instal Pustaka ``` di Arduino IDE 

   <table><tr><td width="810">
   
      Unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

6. ``` Pengaturan Port ``` di Arduino IDE 

   <table><tr><td width="810">
   
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

7. Ubah ``` Nama WiFi ```, ``` Kata Sandi WiFi ```, dan sebagainya sesuai dengan apa yang anda gunakan saat ini.<br><br>

8. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

9. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

10. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Pengaturan ThingSpeak
1. Memulai ThingSpeak : 

   <table><tr><td width="810">
   
      • Silakan <a href="https://thingspeak.com/login">Masuk</a> agar dapat mengakses layanan ThingSpeak.
      
      • Jika anda belum memiliki akun ThingSpeak silakan buat dulu.

   </td></tr></table><br>

2. Membuat channel : 

   <table><tr><td width="810">
   
      • Setelah masuk ke dalam akun -> klik ``` New Channel ```.
   
      • Isi form sesuai dengan kebutuhan anda.
   
      • Klik ``` Save Channel ```.
   
      • Klik ``` Sharing ``` -> pada bagian ``` Channel Sharing Settings ``` silakan pilih -> ``` Share channel view with everyone ```.

   </td></tr></table><br>

3. Membuat visualization : 

   <table><tr><td width="810">
   
      • Pastikan anda berada di menu ``` Channel ``` -> bagian ``` Public View ```.
   
      • Klik ``` + Add Visualization ```.
   
      • Klik ``` Field Chart ``` -> kemudian pilih ``` Save ```.
   
      • Jika ingin mengubah isi visualisasi, silakan klik ``` Field Chart Option ``` -> kemudian pilih ``` Save ``` untuk menyimpan.

   </td></tr></table><br>

4. Membuat widget : 

   <table><tr><td width="810">
   
      • Pastikan anda berada di menu ``` Channel ``` -> bagian ``` Public View ```.
   
      • Klik ``` + Add Widgets ```.
   
      • Klik ``` Numeric Display ``` -> kemudian pilih ``` Next ```.
   
      • Pada bagian ``` Configure widget parameters ``` silakan isi sesuai dengan kebutuhan anda -> kemudian pilih ``` Create ```.
   
      • Jika ingin mengubah isi widget, silakan klik ``` Widget Options ``` -> kemudian pilih ``` Save ``` untuk menyimpan.

   </td></tr></table><br>

5. Konfigurasi firmware : 

   <table><tr><td width="810">
   
      • Pastikan anda berada di menu ``` Channel ``` -> bagian ``` Public View ```.
   
      • Salin ``` Channel ID ``` -> tempelkan pada kode firmware. Contohnya :

      <table><tr><td width="780">
   
      ```
      unsigned long ChannelID = '1504372'; // ID ThingSpeak
      ```

      </td></tr></table>
   
      • Silakan anda beralih ke bagian ``` API Keys ``` -> tempelkan pada kode firmware. Contohnya :

      <table><tr><td width="780">
   
      ```
      const char * APIKey = "TF3UPJK9O1QA5FAU"; // Apikey ThingSpeak
      ```

      </td></tr></table>
   
      • Klik ``` Field Chart IFrame ``` untuk menampilkan tautan chart yang dipilih -> tempelkan tautan tersebut ke dalam kode program web.
   
      • Klik ``` Widget IFrame ``` untuk menampilkan tautan widget yang dipilih -> tempelkan tautan tersebut ke dalam kode program web.

   </td></tr></table>

<br><br>

## Pengaturan Web Lokal Server
1. Pindahkan direktori ``` Website-Project ``` ke dalam direktori ``` htdocs ```, yang rinciannya dapat anda lihat sebagai berikut: ``` C:\xampp\htdocs ```.<br><br>
  
2. Buka ``` index.php ``` yang ada di dalam direktori ``` Website-Project\iot-monstera\index.php ``` melalui ``` Visual Studio Code ```.<br><br>
   
3. Tag ``` <iframe> ``` mohon sesuaikan dengan ``` tautan visualization / widget ``` yang ada di ``` ThingSpeak ```. Contohnya : 

   <table><tr><td width="810">
   
   ```
   <iframe style="width:85%;height:240px;" src="https://thingspeak.com/channels/1504372/charts/1?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&title=Grafik+%28Temperatur+Udara%29&type=line"></iframe>
   ```

   </td></tr></table><br>
   
4. Buka ``` XAMPP ```, lalu mulai bagian ``` Apache ```. Hal ini bertujuan untuk dapat mendukung website secara optimal.<br><br>
   
5. Untuk ``` mengakses situs web ```, buka ``` peramban ``` anda dengan menuliskan : 

   <table><tr><td width="810">
   
   ```
   localhost/Website-Project/iot-monstera/index.php
   ```

   </td></tr></table>
    
<br><br>

## Pengaturan Bot Telegram
1. Buka <a href="https://t.me/botfather">@BotFather</a>.<br><br>

2. Ketik ``` /newbot ```.<br><br>

3. Ketik nama bot yang diinginkan, contoh: ``` monistera_bot ```.<br><br>

4. Ketik nama pengguna bot yang diinginkan, contoh: ``` monistera_bot ```.<br><br>

5. Lakukan juga untuk pengaturan gambar bot, deskripsi bot, dan lain sebagainya menyesuaikan dengan kebutuhan anda.<br><br>

6. Salin ``` API token bot telegram anda ``` -> lalu tempelkan pada bagian ``` #define BOTtoken "YOUR_API_BOT_TOKEN" ```. Contohnya : 

   <table><tr><td width="810">
   
   ```
   #define BOTtoken "2006772150:AAE6Fdjk3KbiySkzV6CLbd6ClJDzgTfJ5y0"
   ```

   </td></tr></table>

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>

2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
   
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>
    
5. Selamat menikmati [Selesai].

<br><br>

## Demonstrasi Aplikasi
Via Telegram: <a href="https://t.me/monistera_bot">@monistera_bot</a>

<br><br>

## Sorotan
<table>
<tr>
<th width="840">Tampilan Produk</th>
</tr>
<tr>
<td><img src="https://user-images.githubusercontent.com/54527592/133962095-8baa3737-3bf0-4d6b-bc65-c0cff1c37021.jpg" alt="product-view"></td>
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
<table>
<tr>
<th width="840">Tampilan Website Monitoring</th>
</tr>
<tr>
<td><img src="https://user-images.githubusercontent.com/54527592/133962162-8856e20d-9e84-43c4-ac4a-0316d2c65004.jpg" alt="monitoring-web-view"></td>
</tr>
</table>

<br>
<strong>Informasi lebih lanjut:</strong> <a href="https://ejournal.upnvj.ac.id/informatik/article/view/3436"><u>Klik Disini</u></a>

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2020 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
