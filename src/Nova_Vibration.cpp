#include "Nova_Vibration.h"

Vibration::Vibration(uint8_t port)
{

	switch(port)
	{
		case S0:
			_Vibration_pin = S0_PIN;  
		break;
		case S1:
			_Vibration_pin = S1_PIN;
		break;
		case S2:
			_Vibration_pin = S2_PIN;
		break;
		case S3:
			_Vibration_pin = S3_PIN;
		break;
		case A0:
	      _Vibration_pin = A0;
	    break;
	    case A1:
	      _Vibration_pin = A1;
	    break;
	    case A2:
	      _Vibration_pin = A2;
	    break;
	    case A3:
	      _Vibration_pin = A3;
	    break;
	    
	    default:
	    break;
	}
	
	pinMode(_Vibration_pin, INPUT);
}

bool Vibration::state(void)
{
	if(digitalRead(_Vibration_pin) == HIGH)
	{
		return false;
	}
	else
	{
		return true;
	}
}