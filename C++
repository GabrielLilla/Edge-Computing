#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define dht_pin 7
#define dht_type DHT22
#define colunas_lcd 16
#define linhas_lcd 2
#define endereco_lcd 0x27

DHT dht(dht_pin, dht_type);
LiquidCrystal_I2C lcd(endereco_lcd, colunas_lcd, linhas_lcd);

void setup() {
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {
  float temperature = dht.readTemperature();
  lcd.setCursor(0, 0);
  lcd.print("Temp.: ");
  lcd.print(temperature);
  lcd.print("C");

  if (temperature > 25 || temperature < 15) {
    lcd.setCursor(0, 1);
    lcd.print("Temp. Critica!");
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Temp. Normal");
  }

  delay(3000);
  lcd.clear(); 

  int ldr = analogRead(A0);
  int valorldr = map(ldr, 0, 1023, 0, 100);
  lcd.setCursor(0, 0);
  lcd.print("Luz: ");
  lcd.print(valorldr);
  lcd.print(" lux");

  if (valorldr <= 20 || valorldr >= 80) {
    lcd.setCursor(0, 1);
    lcd.print("Lum. Critica!");
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Lum. Normal");
  }

  delay(3000); 
  lcd.clear(); 
}
