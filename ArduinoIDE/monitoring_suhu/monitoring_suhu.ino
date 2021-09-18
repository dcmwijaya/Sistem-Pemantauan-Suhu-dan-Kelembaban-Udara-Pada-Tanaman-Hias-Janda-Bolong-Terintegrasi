#include <ESP8266WiFi.h> // library Wifi NodeMCU ESP8266
#include <WiFiClient.h> // library client
#include <DHT.h> // library DHT
#include <ThingSpeak.h> // library platform thingspeak

#define DHTPIN D5 // pin D5 sebagai pin data sensor DHT
#define DHTTYPE DHT22 // mendefinisikan type dari DHT
DHT dht(DHTPIN, DHTTYPE); // mengatur pin DHT dan type DHT
float t,h; // tipe data float: temperature(suhu) dan humidity (kelembapan)

const char *ssid = "WIJAYA"; // nama wifi router
const char *password = "iswari71"; // password wifi router
WiFiClient client; // mengecek jika client sudah terhubung

unsigned long ChannelID = 1504372; // ID ThingSpeak
const char * APIKey = "TF3UPJK9O1QA5FAU"; // Apikey ThingSpeak

void setup() {
  Serial.begin(9600); // memulai komunikasi serial dengan baud rate 9600
  dht.begin(); // memulai sensor DHT
  connectWifi(); // memanggil fungsi connectWifi
  ThingSpeak.begin(client); // inisialisasi ke ThingSpeak
}

void loop()
{
  t = dht.readTemperature(); // membaca suhu udara pada sensor DHT22
  h = dht.readHumidity(); // membaca kelembapan udara pada sensor DHT22
  
  Serial.print("\nSuhu Udara :"); Serial.print(t); Serial.println("°C"); // mencetak nilai data suhu
  Serial.print("Kelembapan Udara :"); Serial.print(h); Serial.println("%"); // mencetak nilai data kelembapan
  sendThingspeak(); // memanggil fungsi sendThingspeak
  delay(1000);
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
