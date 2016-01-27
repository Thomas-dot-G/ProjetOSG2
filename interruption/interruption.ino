#include <avr/sleep.h>

const byte LEDLOOP = 8;
const byte LEDWAKE = 9;

ISR (PCINT1_vect)
 {
 // handle pin change interrupt for A0 to A5 here
 
 // toggle LED
 digitalWrite (LEDWAKE, !digitalRead (LEDWAKE));
 }  // end of PCINT1_vect

void setup () 
  {
  pinMode (LEDWAKE, OUTPUT);
  pinMode (LEDLOOP, OUTPUT);
  digitalWrite (A0, HIGH);  // enable pull-up
  
  // pin change interrupt
  PCMSK1 |= bit (PCINT8);  // want pin A0
  PCIFR  |= bit (PCIF1);   // clear any outstanding interrupts
  PCICR  |= bit (PCIE1);   // enable pin change interrupts for A0 to A5
  
  }  // end of setup

void loop () 
{
 while(1) {}
  } // end of loop
