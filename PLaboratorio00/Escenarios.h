#pragma once

enum escenario { MENU, JUNGLA, COPAS, PLAYA, CUEVA, RIO };

class Escenarios
{
public:
	void Nuevo_Escenario(int level);
private:
	escenario esc_actual=MENU;
};

