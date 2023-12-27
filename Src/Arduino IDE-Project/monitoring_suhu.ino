#include <ESP8266WiFi.h> // library Wifi NodeMCU ESP8266
#include <WiFiClient.h> // library client
#include <DHT.h> // library DHT
#include <ThingSpeak.h> // library platform thingspeak
#include <CTBot.h> // library chatbot telegram
CTBot myBot; // inisialisasi library

#define DHTPIN D5 // pin D5 sebagai pin data sensor DHT
#define DHTTYPE DHT22 // mendefinisikan type dari DHT
DHT dht(DHTPIN, DHTTYPE); // mengatur pin DHT dan type DHT
float t,h; // tipe data float: temperature(suhu) dan humidity (kelembapan)

const char *ssid = "YOUR_WIFI_NAME"; // nama wifi router
const char *password = "YOUR_WIFI_PASSWORD"; // password wifi router
WiFiClient client; // mengecek jika client sudah terhubung

#define BOTtoken "2006772150:AAE6Fdjk3KbiySkzV6CLbd6ClJDzgTfJ5y0" //token bot telegram

unsigned long ChannelID = 'YOUR_CHANNEL_ID_THINGSPEAK'; // ID ThingSpeak
const char * APIKey = "YOUR_WRITEAPIKEY_THINGSPEAK"; // Apikey ThingSpeak

void setup() 
{
  Serial.begin(9600); // memulai komunikasi serial dengan baud rate 9600
  dht.begin(); // memulai sensor DHT
  connectWifi(); // memanggil fungsi connectWifi
  connectBot(); // memanggil fungsi connectBot
  ThingSpeak.begin(client); // inisialisasi ke ThingSpeak
}

void loop()
{
  t = dht.readTemperature(); // membaca suhu udara pada sensor DHT22
  h = dht.readHumidity(); // membaca kelembapan udara pada sensor DHT22
  
  Serial.print("\nSuhu Udara :"); Serial.print(t); Serial.println("°C"); // mencetak nilai data suhu
  Serial.print("Kelembapan Udara :"); Serial.print(h); Serial.println("%"); // mencetak nilai data kelembapan
  sendThingspeak(); // memanggil fungsi sendThingspeak
  botTelegram(); // memanggil fungsi botTelegram
  delay(1000); // waktu tunda
}

void connectWifi()
{
  Serial.println(); Serial.print("Connecting to "); Serial.println(ssid);  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
}

void sendThingspeak ()
{
  ThingSpeak.writeField(ChannelID, 1, t, APIKey); // mengirim nilai data suhu ke ThingSpeak
  ThingSpeak.writeField(ChannelID, 2, h, APIKey); // mengirim nilai kelembapan suhu ke ThingSpeak
  Serial.print("Data berhasil dikirim ke ThingSpeak (ID: ");
  Serial.print(ChannelID);
  Serial.print(")\n");
}

void botTelegram ()
{
  Serial.print("Data berhasil dikoneksikan dengan bot Telegram (@monistera_bot)\n");
  TBMessage msg;
  
  if (myBot.getNewMessage(msg)) {
    if (msg.text.equalsIgnoreCase("/start")) {                 
      String reply1,reply2,sendMsg;
      reply1 = "🙋🏻‍♂️ Hai @" + msg.sender.username + " 👋👋\nSelamat datang di Layanan BOT MONISTERA.";
      reply2 = "\n\nBot ini berguna untuk memantau suhu dan kelembapan udara pada tanaman hias janda bolong.\n\nAnda dapat mengakses /menu untuk mendapatkan pelayanan tersebut.";
      sendMsg = "" + reply1 + "" + reply2;
      myBot.sendMessage(msg.sender.id, sendMsg);
    }
    else if (msg.text.equalsIgnoreCase("/menu")) {                  
      String menu;
      menu = "\n\n📝 Menu Bot Monistera\n/1 = Cek Suhu 🌡️\n/2 = Cek Kelembapan 🌡️";
      myBot.sendMessage(msg.sender.id, menu);
    }
    else if (msg.text.equalsIgnoreCase("/1")) {   
      String reply1,reply3,dreply,sendMsg; float reply2;
      reply1 = "🌡️ Suhu saat ini : ";
      reply2 = float(t);

      if(reply2 >= 23 && reply2 <= 30) {
        dreply = "👍 Kategori : Optimum (Aman)";            
      }else {
        dreply = "👎 Kategori : Tidak Optimum (Berbahaya)";
      }
      
      reply3 = "°C\n" + dreply;
      sendMsg = "" + reply1 + "" + reply2 + "" + reply3;
      myBot.sendMessage(msg.sender.id, sendMsg); 
    }
    else if (msg.text.equalsIgnoreCase("/2")) {            
      String reply1,reply3,dreply,sendMsg; float reply2;
      reply1 = "🌡️ Kelembapan saat ini : ";
      reply2 = float(h);

      if(reply2 < 40) {
        dreply = "👍 Kategori : Optimum (Aman)";            
      }else {
        dreply = "👎 Kategori : Tidak Optimum (Berbahaya)";
      }
      
      reply3 = "%\n" + dreply;
      sendMsg = "" + reply1 + "" + reply2 + "" + reply3;
      myBot.sendMessage(msg.sender.id, sendMsg); 
    }
    else {                                       
      String reply;
      reply = "🙋🏻‍♂️ Hai @" + msg.sender.username + " 👋👋\n\nPerintah: TIDAK DITEMUKAN, silahkan klik /menu untuk info selengkapnya.";
      myBot.sendMessage(msg.sender.id, reply);             
    } 
  }
}

void connectBot ()
{
  myBot.wifiConnect(ssid, password);
  myBot.setTelegramToken(BOTtoken);
}
