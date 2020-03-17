/*
author : adhitya ramasubramanian 
version : 1;
*/
char morseCodeCharacters[]={"Adhitya"};//initiliasing input string 
int led = D7; 

//morse code timing logic 
int dotLength = 200;
int dashLength = dotLength * 4;
int elemPause = dotLength;  
int Spaces = dotLength * 3;


void setup() {
 pinMode(led,OUTPUT);
}

void loop() {
    //looping from beigiing to end of input string 
    for(int n = 0 ; n<sizeof(morseCodeCharacters);n++){
        //get the postion 
         char temp;   
         temp = morseCodeCharacters[n];
        //assiging to lowercase 
        temp = toLowerCase(temp);
        
        GetChar(temp);
    }
    //turn off led for sometime 
    lightOff(6000);

 }

// Morse code dot
void MorseDot(){
  digitalWrite(led, HIGH);  	// led on 
  delay(dotLength);             
}

// morse code dash 
void MorseDash(){
  digitalWrite(led, HIGH);  	
  delay(dashLength);             
}

// Turn Off
void lightOff(int delayTime)
{
  digitalWrite(led, LOW);    	// turn the LED off  	
  delay(delayTime);            	// hold in this position
}

void GetChar(char temp)
{
	// Take the passed character and use a switch case to find the morse code for that character
	switch (temp) {
	  case 'a':	
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'b':
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'c':
	    MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'd':
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'e':
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'f':
	    MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'g':
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'h':
	    MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'i':
	    MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'j':
	    MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
      case 'k':
	    MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'l':
	    MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
      case 'm':
	    MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'n':
	    MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'o':
	    MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'p':
	    MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 'q':
	    MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'r':
	    MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 's':
	    MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  case 't':
	    MorseDash();
		lightOff(elemPause);
		break;
	  case 'u':
	    MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'v':
	    MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'w':
	    MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'x':
	    MorseDash();
	   lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'y':
	    MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		break;
	  case 'z':
	    MorseDash();
		lightOff(elemPause);
		MorseDash();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		MorseDot();
		lightOff(elemPause);
		break;
	  default: 
	
		lightOff(Spaces);			
	}
}

