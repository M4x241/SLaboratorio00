#pragma once
class Terreno
{
public:
	Terreno();
	Terreno(int Ancho, int Alto, int posicionX, int poicionY);
	bool Encima(int );
private:
	int posicionX;
	int posicionY;
	int ancho;
	int alto;
}tierra, agua;

