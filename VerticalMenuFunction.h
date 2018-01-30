// VerticalMenuFunction.h
#pragma once

#ifndef _VERTICALMENUFUNCTION_h
#define _VERTICALMENUFUNCTION_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#include "VerticalMenuScreen.h"

typedef void(* VerticalMenuFunc)(VerticalMenuScreen* verticalMenu);

#endif

