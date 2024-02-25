#pragma once

enum Estados {SANO, ATURDIDO, INCONCIENTE };

class Gorila
{
public:
	void movimiento();
	void gravedad();
	void salto();
	int gorilaX();
	int gorilaY();

private:
	int posicionX=15;
	int posicionY=12;
	int velocidadX=1;
	bool dash = false;
	bool enAire = false;
	Estados Est_Actual = SANO;
};

