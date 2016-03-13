#pragma once
#include "Producto.h"
class IPod :
	public Producto
{
public:

	AlmIPod getAlmacenamiento();
	std::string toString();

	void setAlmacenamiento(AlmIPod);

	IPod(double, double, AlmIPod, std::string);
	~IPod();
private:
	AlmIPod almacenamiento;
};

