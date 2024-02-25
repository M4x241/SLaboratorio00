#pragma once
class Obstaculos
{
public:
	int impacto(int GorilaX, int GorilaY);

private:
	enum dureza{MADERA, PIEDRA };
	dureza tipoObjeto = MADERA;
	int posicionX;
	int posicionY;
};