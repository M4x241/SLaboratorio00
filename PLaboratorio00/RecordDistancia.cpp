#include "RecordDistancia.h"
#include <iostream>

using namespace std;
void RecordDistancia::DistanciaRec()
{
	metros++;
	cout << metros;
}

int RecordDistancia::Distancia()
{
	return metros;
}
