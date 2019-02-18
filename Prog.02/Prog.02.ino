/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Cruïlla de semàfors                   **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 18/02/2019   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 7;          // donar nom al pin 7 de l’Arduino
const int led1 = 8;          // donar nom al pin 8 de l’Arduino
const int led2 = 9;          // donar nom al pin 9 de l’Arduino
const int led3 = 10;         // donar nom al pin 10 de l’Arduino
const int led4 = 11;         // donar nom al pin 11 de l’Arduino
const int led5 = 12;         // donar nom al pin 12 de l’Arduino


//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);    
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);       
}
//********** Loop *****************************************************************
void loop()                            
{
  digitalWrite(led0, );    // posar a 5V el pin 5.
  digitalWrite(led1, );    // posar a 5V el pin 6
  digitalWrite(led2, );    // posar a 5V el pin 7
  digitalWrite(led3, );    // posar a 5V el pin 8
  digitalWrite(led4, );    // posar a 5V el pin 9
  digitalWrite(led5, );    // posar a 5V el pin 10
  
  delay(500);                  // es queden leds 500ms encesos
  
  digitalWrite(led0, HIGH);     // posar a 0V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);     // posar a 0V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);     // posar a 0V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10

  
  delay(500);                  // es queden leds 500ms apagats  
}

//********** Funcions *************************************************************
