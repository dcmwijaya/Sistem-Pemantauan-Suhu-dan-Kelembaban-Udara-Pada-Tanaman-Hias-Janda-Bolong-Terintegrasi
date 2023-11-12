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

<br><br>

## Features / Framework / Tools
| Media | Description |
| --- | --- |
| Platform | ThingSpeak |
| IoT Protocol | HTTP |
| Board Development | NodeMCU |
| Code Editor | Arduino IDE & Visual Studio Code |
| Telegram | Telegram Bot API |
| Layout Design | Bootstrap |
| Arduino Library | Arduino Low Power, ThingSpeak, DHT Sensor Library, WiFi, & CTBot |
| Sensor | DHT22 (Air Temperature & Humidity) |
| Other Components | Jumper cable, Breadboard, & Casing  |

<br><br>

## Download & Install Arduino IDE
```bash
https://www.arduino.cc/en/software
```

<br><br>

## Settings
1. Open the Arduino IDE first, then enter the Boards Manager Url by copying the following link:
   ```bash
   http://arduino.esp8266.com/stable/package_esp8266com_index.json
   ```
<br>

2. Board Setup in Arduino IDE
   <ul>
      <li>Method: click Boards Manager -> ESP8266 Boards -> NodeMCU 1.0 (ESP-12E Module).</li>
   </ul>
   <br>
3. Port Setup in Arduino IDE
   <ul>
      <li>Method: click Port -> Choose according to your device port (you can see in device manager).</li>
   </ul>
   <br>
4. Install Library in Arduino IDE
   <ul>
      <li>Method: click Tools -> Manage Libraries -> Install Library according to project needs.</li>
   </ul>

<br><br>

## Hardware Design
<img src="https://user-images.githubusercontent.com/54527592/133961211-2cd3fda2-a9fe-4381-9cca-1816b0ae1f60.jpg">

<br><br>

## Get Started
1. Download this Repository.
   
2. Make sure you have the necessary electronic components.
   
3. Make sure your components have been designed according to the diagram.
   
4. Make sure the components are well connected ``` (Adjust Board and Port settings) ```.
   
5. It is recommended to ``` create a IoT Platform account ``` along with this service.
    
6. Make sure to change the arduino program code in the ``` Router ``` section according to the device you are using.
    
7. If you do not apply points 2 and 3 for the purposes of project development, it is fine, but please note that some things need to be changed in order to function properly.
    
8. Done, good luck.

<br><br>

## Highlights
<table>
<tr>
<th width="420">Product View</th>
<th width="420">Monitoring Website View</th>
</tr>
<tr>
<td><img src="https://user-images.githubusercontent.com/54527592/133962095-8baa3737-3bf0-4d6b-bc65-c0cff1c37021.jpg" alt="product-view"></td>
<td><img src="https://user-images.githubusercontent.com/54527592/133962162-8856e20d-9e84-43c4-ac4a-0316d2c65004.jpg" alt="monitoring-web-view"></td>
</tr>
</table>
<table>
<tr>
<th colspan="2">Telegram Bot View</th>
</tr>
<tr>
<td width="420"><img src="https://user-images.githubusercontent.com/54527592/133962195-70e38df7-8e56-422b-ba30-3b42a642c62b.JPG" alt="bot-menu1"></td>
<td width="420"><img src="https://user-images.githubusercontent.com/54527592/133962202-2399d06a-4f97-4335-86b4-4c043d7d1d17.JPG" alt="bot-menu2"></td>
</tr>
</table>

<br><br>

Notes: This project requires internet to run the application.<br><br>
<b>More information:</b> <a href="https://ejournal.upnvj.ac.id/informatik/article/view/3436"><u>Click Here</u></a>

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright (c) 2020 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
