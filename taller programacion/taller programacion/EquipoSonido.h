#pragma once
#include "Producto.h"
class EquipoSonido :
	public Producto
{
public:
	int getCantidadCds();
	std::string toString();

	void setCantidadCds(int);

	EquipoSonido(double, double, int, std::string);
	~EquipoSonido();
private:
	int cantidadCds;
};

