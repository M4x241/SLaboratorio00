#include "Gorila.h"

void Gorila::movimiento()
{
	if (dash)
		velocidadX = velocidadX * 10;
	else
		velocidadX = 1;
}

void Gorila::gravedad()
{
	while (enAire) {
		posicionY = posicionY - 1;
	}

}

void Gorila::salto()
{
	posicionY = posicionY + 10;
	enAire = true;
	gravedad();
}
