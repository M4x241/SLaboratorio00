#pragma once
//QUE SE CAMBIE EL FONDO PORLOMENOS;
class Escenarios
{
public:
	void Esc_Menu();
	void Esc_Jungla();
	void Esc_Copas();
	void Esc_Playa();
	void Esc_Cueva();
	void Esc_Rio();
private:
	enum escenario { MENU, JUNGLA, COPAS, PLAYA, CUEVA, RIO };
};

