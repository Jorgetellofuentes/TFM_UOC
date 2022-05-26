#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>

const char* ssid = "MIWIFI_Xpur";
const char* password = "EcuDpCvj";
const char* servidorWeb = "www.vermiip.es";



void setup() {
  // put your setup code here, to run once:

Serial.begin (115200);
//Inicializa la conexion wifi

Serial.print("Conectando a " + String(ssid)+" ");
WiFi.begin(ssid,password);
while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Conectado");
  
  }
  


void loop() {
  // put your main code here, to run repeatedly:


WiFiClient clienteWeb;

if (clienteWeb.connect(servidorWeb,80))
{
  clienteWeb.print(String("GET/") + "HTTP/1.1\n" +
  "Host: "+servidorWeb+ "\n"+
  "Connection:close\r\n"+"Connection:close \n\n");


  while(clienteWeb.connected())
  {
    if(clienteWeb.available())
    {
      String linea = clienteWeb.readStringUntil('\n');
    if(linea.indexOf("<h2>Tu IP p&uacute;blica es:")!=-1)
    Serial.println("Su IP pública es :"+
    linea.substring(linea.indexOf("<h2>Tu IP p&uacute;blica es: ")+28,
    (linea.indexOf("</h2>"))));
  }
}

clienteWeb.stop();
 }

else Serial.println("Problemas de conexión con el servidor");

delay(1000);

}
