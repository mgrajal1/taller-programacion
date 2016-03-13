#pragma once
#include "Producto.h"
class Televisor :
	public Producto
{
public:
	std::string toString();

	double getTamano();

	void setTamano(double);
	
	Televisor(double, double, double, std::string);
	~Televisor();
private:
	double tamano;
};

