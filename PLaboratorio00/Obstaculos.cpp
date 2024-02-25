#include "Obstaculos.h"

int Obstaculos::impacto(int GorilaX, int GorilaY)
{
	if (posicionX == GorilaX && posicionY == GorilaY){
		return tipoObjeto;
}
		return 0;
}
