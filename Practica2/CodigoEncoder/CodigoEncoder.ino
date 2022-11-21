#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int sensorA= 3;
int sensorB= 2;

volatile int pulso=0;
int contadorAnter=0;
int vueltas=0;
int angulo=0;

void setup() {
  pinMode(sensorB,INPUT);
  attachInterrupt(digitalPinToInterrupt(sensorA), interrupA, RISING);
  Serial.begin(57600);
  lcd.init();
  lcd.backlight();
  lcd.print("Bienvenido, gire");

}

void loop() {
  if(abs(pulso) == 1){
    lcd.setCursor(0,0);
    lcd.print("Angulo: ");
    lcd.setCursor(12,0);
    lcd.print("V:");
  }
if( pulso != contadorAnter){
  angulo=360*(abs(pulso)-vueltas*72)/72;
  vueltas=abs(pulso)/72;
  
  lcd.setCursor(8,0);
  lcd.print("   ");
  lcd.setCursor(8,0);
  lcd.print(angulo);
  lcd.setCursor(14,0);
  lcd.print("  ");
  lcd.setCursor(14,0);
  lcd.print(vueltas);

  Serial.println(angulo);
  if( pulso > contadorAnter){
    lcd.setCursor(2,1);
    lcd.print("    HORARIO");
  }
  else{
    lcd.setCursor(2,1);
    lcd.print("ANTIHORARIO");
  }
  contadorAnter=pulso;
}
}

void interrupA(){
  if(digitalRead(sensorB) == LOW){
      pulso++;
    }
    else{
      pulso--;
    }
}
