#include<iostream>
#include"MenuPrincipal.h"
#include"Avalancha.h"
#include"Gorila.h"
#include"Terreno.h"
#include"Obstaculos.h"
#include"RecordDistancia.h"
#include"Escenarios.h"

//el tamano de pantalla sera de 100 px de largo y 60 px de ancho
using namespace std;

int main() {
	Gorila gorila;
	MenuPrincipal barra;
	Avalancha avalancha;
	RecordDistancia recordis;
	Obstaculos obstaculo;
	barra.Sel_opcion();


	while (1) {
		gorila.movimiento();
		gorila.salto();
		gorila.gravedad();
		avalancha.deslizamiento(recordis.Distancia());
		recordis.DistanciaRec();
		obstaculo.impacto(gorila.gorilaX(), gorila.gorilaY());
	}
	return 0;
}
