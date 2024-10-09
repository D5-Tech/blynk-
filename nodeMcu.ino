#define BLYNK_TEMPLATE_ID "TMPL389"
#define BLYNK_TEMPLATE_NAME "syem"
#define BLYNK_AUTH_TOKEN "Iom3jPB7m3u7V"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
