#pragma once
enum Opciones { INICIAR, TIENDA, AJUSTES };

class MenuPrincipal
{
public:
	void Sel_opcion();
private:
	int ancho=100;
	int alto=60;
	Opciones opcion;
};

