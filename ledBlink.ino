#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define BLYNK_TEMPLATE_ID           "TEMPLATE_ID"
#define BLYNK_DEVICE_NAME           "DEVICE_NAME"
#define BLYNK_AUTH_TOKEN            "AUTH_TOKEN"
#define BLYNK_PRINT Serial

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "WIFINAME";
char pass[] = "WIFIPASSWORD";

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V0) {
  int pinValue = param.asInt(); 
  Serial.println(pinValue == 1 ? "V0 On" : "V0 Off");
}
BLYNK_WRITE(V1) {
  int pinValue = param.asInt(); 
  Serial.println(pinValue == 1 ? "V1 On" : "V1 Off");
}
BLYNK_WRITE(V2) {
  int pinValue = param.asInt(); 
  Serial.println(pinValue == 1 ? "V2 On" : "V2 Off");
}
BLYNK_WRITE(V3) {
  int pinValue = param.asInt(); 
  Serial.println(pinValue == 1 ? "V3 On" : "V3 Off");
}
