#pragma once
//#include<iostrream>
enum Opciones { INICIAR, TIENDA, AJUSTES };

class MenuPrincipal
{
public:
	int Sel_opcion();
private:
	int ancho=100;
	int alto=60;
	int nOpcion;
	Opciones opcion;
};

