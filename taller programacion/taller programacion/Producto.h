#pragma once
#include <string>
class Producto
{
public:	
	std::string toString();

	double getVoltaje();
	double getCoste();
	std::string getNombre();

	void setVoltaje(double);
	void setCoste(double);
	void setNombre(std::string);
	~Producto();
protected:
	Producto(double, double, std::string);
	double voltaje;
	double coste;
	std::string nombre;
};

