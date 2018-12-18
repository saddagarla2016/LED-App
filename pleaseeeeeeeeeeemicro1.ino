#include <ESP8266WiFi.h>

#include <FireBaseArduino.h>


// Set these to run example.

#define FIREBASE_HOST "Look at Firebase Console ( this is using realtime database and not cloud database ) (name of the link for the child and parents are in firebase)"

#define FIREBASE_AUTH "Secreat key (in service accounts in your firebase account)"

#define WIFI_SSID "Wifi Router Name"

#define WIFI_PASSWORD "Router Password"



void setup() {



Serial.begin(9600);

WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

Serial.print("connecting");

while (WiFi.status() != WL_CONNECTED) {

Serial.print(".");

delay(500);

}

Serial.println();

Serial.print("connected: ");

Serial.println(WiFi.localIP());

Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);


}

void loop() {

if(Firebase.getInt("LEDStatus"))

{

digitalWrite(LED,HIGH);

}

else

{

digitalWrite(LED,LOW);

}

if (Firebase.failed()) // Check for errors {

Serial.print("setting /number failed:");

Serial.println(Firebase.error());

return;

}

delay(1000);

}
