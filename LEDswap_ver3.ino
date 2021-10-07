
/*************************************************** 
  This is an example for our Adafruit 24-channel PWM/LED driver

  Pick one up today in the adafruit shop!
  ------> http://www.adafruit.com/products/1429

  These drivers uses SPI to communicate, 3 pins are required to  
  interface: Data, Clock and Latch. The boards are chainable

  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#include "Adafruit_TLC5947.h"

// How many boards do you have chained?
#define NUM_TLC5974 1

#define data1 9
#define clock1 10
#define latch1 11
#define data2 2
#define clock2 3
#define latch2 4
#define oe  -1  // set to -1 to not use the enable pin (its optional)
#define sec 1000
int IALdur = 1200;
int IADdur = 3600;
int IBLdur = 1200;
int IBDdur = 3600;
int ICLdur = 1200;
int ICDdur = 3600;
int IDLdur = 1200;
int IDDdur = 3600;
int IELdur = 1200;
int IEDdur = 3600;
int IFLdur = 1200;
int IFDdur = 3600;
int IAL;
int IAD;
int IBL;
int IBD;
int ICL;
int ICD;
int IDL;
int IDD;
int IEL;
int IED;
int IFL;
int IFD;
int IIALdur = 1200;
int IIADdur = 3600;
int IIBLdur = 1200;
int IIBDdur = 3600;
int IICLdur = 1200;
int IICDdur = 3600;
int IIDLdur = 1200;
int IIDDdur = 3600;
int IIELdur = 1200;
int IIEDdur = 3600;
int IIFLdur = 1200;
int IIFDdur = 3600;
int IIAL;
int IIAD;
int IIBL;
int IIBD;
int IICL;
int IICD;
int IIDL;
int IIDD;
int IIEL;
int IIED;
int IIFL;
int IIFD;



Adafruit_TLC5947 tlc1 = Adafruit_TLC5947(NUM_TLC5974, clock1, data1, latch1);
Adafruit_TLC5947 tlc2 = Adafruit_TLC5947(NUM_TLC5974, clock2, data2, latch2);

void setup() {
  Serial.begin(9600);
  tlc1.begin();
  tlc2.begin();
  if (oe >= 0) {
    pinMode(oe, OUTPUT);
    digitalWrite(oe, LOW);
  }
}

void loop() {
//Device 1 Well A1
if (IAL < IALdur) {
  tlc1.setPWM(23, 165);
  IAL++;
} else if (IAD < IADdur) {
  tlc1.setPWM(23, 0);
  IAD++;
} else {
  IAL = 0;
  IAD = 0;
}
//End Device 1 Well A1
//Device 1 Well A2
if (IBL < IBLdur) {
  tlc1.setPWM(18, 150);
  IBL++;
} else if (IBD < IBDdur) {
  tlc1.setPWM(18, 0);
  IBD++;
} else {
  IBL = 0;
  IBD = 0;
}
//End Device 1 Well A2
//Device 1 Well A3
if (ICL < ICLdur) {
  tlc1.setPWM(12, 165);
  ICL++;
} else if (ICD < ICDdur) {
  tlc1.setPWM(12, 0);
  ICD++;
} else {
  ICL = 0;
  ICD = 0;
}
//End Device 1 Well A3
//Device 1 Well B1
if (IDL < IDLdur) {
  tlc1.setPWM(0, 370);
  IDL++;
} else if (IDD < IDDdur) {
  tlc1.setPWM(0, 0);
  IDD++;
} else {
  IDL = 0;
  IDD = 0;
}
//End Device 1 Well B1
//Device 1 Well B2
if (IEL < IELdur) {
  tlc1.setPWM(5, 223);
  IEL++;
} else if (IED < IEDdur) {
  tlc1.setPWM(5, 0);
  IED++;
} else {
  IEL = 0;
  IED = 0;
}
//End Device 1 Well B2
//Device 1 Well B3
if (IFL < IFLdur) {
  tlc1.setPWM(11, 660);
  IFL++;
} else if (IFD < IFDdur) {
  tlc1.setPWM(11, 0);
  IFD++;
} else {
  IFL = 0;
  IFD = 0;
}
//End Device 1 Well B3
//End Device 1

//Begin Device 2
//Device 2 Well A1
if (IIAL < IIALdur) {
  tlc2.setPWM(23, 590);
  IIAL++;
} else if (IIAD < IIADdur) {
  tlc2.setPWM(23, 0);
  IIAD++;
} else {
  IIAL = 0;
  IIAD = 0;
}
//End Device 2 Well A1
//Device 2 Well A2
if (IIBL < IIBLdur) {
  tlc2.setPWM(18, 670);
  IIBL++;
} else if (IIBD < IIBDdur) {
  tlc2.setPWM(18, 0);
  IIBD++;
} else {
  IIBL = 0;
  IIBD = 0;
}
//End Device 2 Well A2
//Device 2 Well A3
if (IICL < IICLdur) {
  tlc2.setPWM(12, 550);
  IICL++;
} else if (IICD < IICDdur) {
  tlc2.setPWM(12, 0);
  IICD++;
} else {
  IICL = 0;
  IICD = 0;
}
//End Device 2 Well A3
//Device 2 Well B1
if (IIDL < IIDLdur) {
  tlc2.setPWM(0, 1150);
  IIDL++;
} else if (IIDD < IIDDdur) {
  tlc2.setPWM(0, 0);
  IIDD++;
} else {
  IIDL = 0;
  IIDD = 0;
}
//End Device 2 Well B1
//Device 2 Well B2
if (IIEL < IIELdur) {
  tlc2.setPWM(5, 1116);
  IIEL++;
} else if (IIED < IIEDdur) {
  tlc2.setPWM(5, 0);
  IIED++;
} else {
  IIEL = 0;
  IIED = 0;
}
//End Device 2 Well B2
//Device 2 Well B3
if (IIFL < IIFLdur) {
  tlc2.setPWM(11, 3540);
  IIFL++;
} else if (IIFD < IIFDdur) {
  tlc2.setPWM(11, 0);
  IIFD++;
} else {
  IIFL = 0;
  IIFD = 0;
}
//End Device 2 Well B3

//End Device 2
tlc1.write();
tlc2.write();
delay(sec);
}
