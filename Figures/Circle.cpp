#include "stdafx.h"
#include "Circle.h"


Circle::Circle(int x_center_ini, int y_center_ini, int radius_ini)
{
	x_center = x_center_ini;
	y_center = y_center_ini;
	radius = radius_ini;
}

int Circle::get_x_center() const {
	return x_center;
}

int Circle::get_y_center() const {
	return y_center;
}

int Circle::get_radius() const {
	return radius;
}

Circle::~Circle()
{
}
