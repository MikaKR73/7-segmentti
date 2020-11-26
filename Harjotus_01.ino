// Arvot
#define LedE 11
#define LedD 10
#define LedC 9
#define LedDP 8
#define LedG 7
#define LedF 6
#define LedA 5
#define LedB 4
#define LedOFF HIGH
#define LedON LOW

//Muuttujien arvon määritys
int LedEState = LedOFF;
int LedDState = LedOFF;
int LedCState = LedOFF;
int LedDPState = LedOFF;
int LedGState = LedOFF;
int LedFState = LedOFF;
int LedAState = LedOFF;
int LedBState = LedOFF;

// Otetaan käyttöön
void setup(){
  pinMode(LedE, OUTPUT);
  pinMode(LedD, OUTPUT);
  pinMode(LedC, OUTPUT);
  pinMode(LedDP, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedF, OUTPUT);
  pinMode(LedA, OUTPUT);
  pinMode(LedB, OUTPUT);
  digitalWrite(LedE, LedEState);
  digitalWrite(LedD, LedDState);
  digitalWrite(LedC, LedCState);
  digitalWrite(LedDP, LedDPState);
  digitalWrite(LedG, LedGState);
  digitalWrite(LedF, LedFState);
  digitalWrite(LedA, LedAState);
  digitalWrite(LedB, LedBState);
  Serial.begin(9600);
}

int count = 1; //Määritetään numero arvo laskurille

void LediTila(){ // Määritetään ledien päälle
  switch( count ){
    case 1:
    	// Määritetään ledin tila numerolle 1
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedOFF;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 1");
    	break;
  	case 2: 
    	// Määritetään ledin tila numerolle 2
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedOFF;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedOFF;
    	LedAState = LedON;
    	LedBState = LedON;
    Serial.println("LEDI NAYTTAA NUMEROA 2");
    	break;
  	case 3: 
    	// Määritetään ledin tila numerolle 3
        LedEState = LedOFF;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedOFF;
    	LedAState = LedON;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 3");
    	break;
   	case 4: 
    	// Määritetään ledin tila numerolle 4
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedOFF;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 4");        break;
   	case 5: 
    	// Määritetään ledin tila numerolle 5
        LedEState = LedOFF;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedOFF;
    	Serial.println("LEDI NAYTTAA NUMEROA 5");        break;
   	case 6: 
    	// Määritetään ledin tila numerolle 6
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedOFF;
    	Serial.println("LEDI NAYTTAA NUMEROA 6");
    	break;
   	case 7: 
    	// Määritetään ledin tila numerolle 7
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedON;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 7");
    	break;
   	case 8: 
    	// Määritetään ledin tila numerolle 8
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 8");
    	break;
     case 9: 
    	// Määritetään ledin tila numerolle 9
        LedEState = LedOFF;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedON;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 9");
    	break;
     case 10: 
    	// Määritetään ledin tila numerolle 0
        LedEState = LedON;
        LedDState = LedON;
    	LedCState = LedON;
    	LedDPState = LedON;
    	LedGState = LedOFF;
    	LedFState = LedON;
    	LedAState = LedON;
    	LedBState = LedON;
    	Serial.println("LEDI NAYTTAA NUMEROA 0");
    	break;
    case 11: // Sammutetaan ledit
        LedEState = LedOFF;
        LedDState = LedOFF;
    	LedCState = LedOFF;
    	LedDPState = LedOFF;
    	LedGState = LedOFF;
    	LedFState = LedOFF;
    	LedAState = LedOFF;
    	LedBState = LedOFF;
    	Serial.println("LEDIT SAMUTETAAN");
    	count = 0;
        break;

    }
  }
  
void loop(){
  LediTila();  
  digitalWrite(LedE, LedEState); //Kirjoittaa ledin tilan
  digitalWrite(LedD, LedDState); //Kirjoittaa ledin tilan
  digitalWrite(LedC, LedCState); //Kirjoittaa ledin tilan
  digitalWrite(LedDP, LedDPState); //Kirjoittaa ledin tilan
  digitalWrite(LedG, LedGState); //Kirjoittaa ledin tilan
  digitalWrite(LedF, LedFState); //Kirjoittaa ledin tilan
  digitalWrite(LedA, LedAState); //Kirjoittaa ledin tilan
  digitalWrite(LedB, LedBState); //Kirjoittaa ledin tilan
  count++;
  delay(1000); // Odottaa 1000 millisekunttia
}
