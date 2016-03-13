#include "stdafx.h"
#include "Producto.h"

using namespace std;


Producto::Producto(double voltaje, double coste, std::string nombre)
{
	this->voltaje = voltaje;
	this->coste = coste;
	this->nombre = nombre;
}


string Producto::toString()
{
	return nombre + "\tCOL$" + to_string(coste);
}

double Producto::getVoltaje()
{
	return voltaje;
}

double Producto::getCoste()
{
	return coste;
}

std::string Producto::getNombre()
{
	return nombre;
}

void Producto::setVoltaje(double voltaje)
{
	this->voltaje = voltaje;
}

void Producto::setCoste(double coste)
{
	this->coste = coste;
}

void Producto::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

Producto::~Producto()
{
}
