#include"TFT_eSPI.h"

TFT_eSPI tft;

void setup(){
  tft.begin();
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_KEY_C, INPUT_PULLUP);
  tft.fillScreen(0x1F);

}



void loop(){

  if (digitalRead(WIO_KEY_A) == LOW) {
    tft.fillScreen(0xF800);
    tft.drawString((String)"INIZIALIZZAZIONE PROCESSO MATRIX", 100, 100);
    tft.setTextColor(0x0);
    tft.println(analogRead(WIO_LIGHT));
  }
  if (digitalRead(WIO_KEY_B) == LOW) {
    tft.fillScreen(0x4FE0);
    tft.drawString((String)"PROCESSO ESEGUITO", 100, 100);
    tft.setTextColor(0x0);
  }
  if (digitalRead(WIO_KEY_C) == LOW) {
    tft.fillScreen(0x2FE0);
    tft.fillScreen(0xF801);
    tft.fillScreen(0x79F);
    tft.drawString((String)"CARICAMENTO DATI", 100, 100);
    tft.setTextColor(0x0);
  }

}
