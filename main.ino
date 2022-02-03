#include <IRremote.h>


#define OK_BUTTON 16712445 // OK

#define FORWARD_BUTTON 16736925 // ▲
#define BACK_BUTTON 16754775 // ▼
#define LEFT_BUTTON 16720605 // ◄
#define RIGHT_BUTTON 16761405 // ►

#define ONE_BUTTON 16738455 // 1
#define TWO_BUTTON 16750695 // 2
#define THREE_BUTTON 16756815 // 3
#define FOUR_BUTTON 16724175 // 4
#define FIVE_BUTTON 16718055 // 5
#define SIX_BUTTON 16743045 // 6
#define SEVEN_BUTTON 16716015 // 7 
#define EIGHT_BUTTON 16726215 // 8
#define NINE_BUTTON 16734885 // 9
#define ZERO_BUTTON 16730805 // 0

#define LATTICE_BUTTON 16732845 // #
#define ASTERISK_BUTTON 16728765 // *


long gem;

IRrecv irrecv (0); // Enter the your receiver connection pin
decode_results results; 


void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}


void loop()
{
  if(irrecv.decode (&results))
  {
    gem = results.value;
    /*
     * Implement the handling of button clicks, through a variable ("gem") check.
    */
    irrecv.resume();
  }
}
