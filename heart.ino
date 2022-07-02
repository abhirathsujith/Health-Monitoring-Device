#include <Wire.h>

#include <SoftwareSerial.h>

#include <LiquidCrystal_I2C.h>//uncomment when using a I2C

LiquidCrystal_I2C lcd(0x27,16,2);
SoftwareSerial gsm(8,9);
SoftwareSerial ss(6,5);
String phone_no1 = "8971504592";
//String phone_no2 = "";

float value=0;
float rev=0;
int rpm;
int oldtime=0;
int time;
long randNumber;
const int BUZZ = 8;
void sendsms (String phone_no1,float s);

   double alpha=1;
   int period=50;
   double refresh=0.0;
   
   void isr() //interrupt service routine
{
rev++;
}
 
   
void setup(void)
{
   pinMode(A0,INPUT);
   Serial.begin(9600);
  gsm.begin(9600);
ss.begin(9600);
lcd.init();
  lcd.clear();
  lcd.backlight();
   pinMode(BUZZ, OUTPUT);


 

attachInterrupt(0,isr,RISING); 
}

void loop(void)
{
   static double oldValue=0;
   static double oldrefresh=0;
 
   int beat=analogRead(A0);
  
   double value=alpha*oldValue+(0-alpha)*beat;
   refresh=value-oldValue;
   int b=beat/7;
  
     Serial.println("♥ HeartBeat ♥ "); // If test s "true", print a message "a heartbeat happened".
Serial.print("BPM: "); // Print phrase "BPM: "
Serial.println(b);
 
   lcd.setCursor(0,0);
   lcd.print(" Heart Monitor "); 
   lcd.setCursor(0,1);
   lcd.print("          ");
   lcd.setCursor(0,1); 
   lcd.print(b);
 
   oldValue=value;
   oldrefresh=refresh;
  
   delay(period*10);
   if (b>=30)
{
  sendsms(phone_no1, b);
  digitalWrite(BUZZ, HIGH);
  delay(3000);
  digitalWrite(BUZZ, LOW);
 // sendsmsrto(phone_no2, s);
  
}

attachInterrupt(0,isr,RISING);
}



void sendsms(String phoneno,float b)
{
  
  bool newddata = false;
  unsigned long chars;
  unsigned short sentences,failed;
  float flat,flon;
  unsigned long age;
  randNumber = random(10000,99999);

  gsm.print("AT+CMGF=1\r");
  delay(400);
  gsm.print("AT+CMGS=\"");
  gsm.print(phoneno);
  gsm.println("\"");
  delay(300);
 
  
  //lcd.print(randNumber);

  
  
  Serial.println("\nHeart Monitor");
  Serial.print("\nBPM: ");
  Serial.print(b);
  Serial.print("");
  Serial.print("\n");
  gsm.print("\nHeart Monitor\n \nALERT!!! Heart Rate is HIGH");
  
  
  gsm.print("\nBPM:");
  gsm.print(b);
  gsm.print("");
  gsm.print("\n");
  
  


  
  //gsm.print("\n");

  
  Serial.println("HO\n ");
  
  

  delay(200);
  

  Serial.print(flat);
  Serial.print("\n");
  Serial.print(flon);
  Serial.print("\n");
  gsm.println((char)26);
  delay(200);
  gsm.println();
  
}
