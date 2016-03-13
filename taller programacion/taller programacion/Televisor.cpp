#include "stdafx.h"
#include "Televisor.h"

using namespace std;

Televisor::Televisor()
{
}


std::string Televisor::toString()
{
	return Producto::nombre + "\t" + to_string(tamano) + "\"\tCOL$" + to_string(Producto::coste);
}

double Televisor::getTamano()
{
	return tamano;
}

void Televisor::setTamano(double tamano)
{
	this->tamano = tamano;
}

Televisor::Televisor(double voltaje, double coste, double tamano, std::string nombre) : Producto(voltaje, coste, nombre)
{
	this->tamano = tamano;
}

Televisor::~Televisor()
{
}
