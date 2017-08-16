#include "cheats.h"

void 	RandomVR(void)
{
	int RNG = RandomNumber(0, 10000);
	WRITEU32(0x2F748660, RNG);
}