/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include "avr8-stub.h" // hardware debugger

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13

// Debug printing preprocessor directives
#define DEBUG_PRINTS false

#if DEBUG_PRINTS
#define debug_begin(x) Serial.begin(x)
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug_begin(x) (void)0
#define debug(x) (void)0
#define debugln(x) (void)0
#endif

void setup()
{
    debug_init(); // GDB debugger

    // initialize LED digital pin as an output.
    pinMode(LED_BUILTIN, OUTPUT);

    debug_begin(9600); //print debugger
}

void loop()
{

    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);

    // wait for a second
    delay(500);

    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);

    debugln("Hello World");

    // wait for a second
    delay(500);
}