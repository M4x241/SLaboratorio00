#include "Avalancha.h"

void Avalancha::deslizamiento(int metro)
{
	posicionX = posicionX * velocidad;
	if (metro%100==0) {
		velocidad = velocidad + 0.1;
	}
}
