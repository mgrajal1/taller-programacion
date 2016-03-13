#include "stdafx.h"
#include "EquipoSonido.h"
#include <string>

using namespace std;

int EquipoSonido::getCantidadCds()
{
	return cantidadCds;
}

std::string EquipoSonido::toString()
{
	return Producto::nombre + "\t" + itoa(cantidadCds) + " CDS\tCOL$" + to_string(Producto::coste);
}

void EquipoSonido::setCantidadCds(int cantidadCds)
{
	this->cantidadCds = cantidadCds;
}

EquipoSonido::EquipoSonido(double voltaje, double coste, int cantidadCds, std::string nombre) : Producto(voltaje, coste, nombre)
{
	this->cantidadCds = cantidadCds;
}

EquipoSonido::~EquipoSonido()
{
}
