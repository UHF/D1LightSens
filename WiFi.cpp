#include <ESP8266WiFi.h>
#include "Settings.h"


const char* ssid = WIFI_SSID;
const char* password = WIFI_PASS;

/*IPAddress staticIP(192,168,1,22);
IPAddress gateway(192,168,1,9);
IPAddress subnet(255,255,255,0);
*/

void WiFi_setup()
{
  Serial.begin(SERIAL_SPEED);
  Serial.println();

  Serial.printf("Connecting to %s\n", ssid);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  //WiFi.config(staticIP, gateway, subnet);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void WifI_loop() {}
