#ifndef WIFI_INFO_H
#define WIFI_INFO_H

#include <ESP8266WiFi.h>
#include <credentials.h>

const char *ssid = WIFI_SSID;   // from credentials.h
const char *password = WIFI_PW; // from credentials.h

void wifi_connect() {
	WiFi.persistent(false);
	WiFi.mode(WIFI_STA);
	WiFi.setAutoReconnect(true);
	WiFi.begin(ssid, password);
	Serial.println("WiFi connecting...");
	while (!WiFi.isConnected()) {
		delay(100);
		Serial.print(".");
	}
	Serial.print("\n");
	Serial.printf("WiFi connected, IP: %s\n", WiFi.localIP().toString().c_str());
}

#endif // WIFI_INFO_H