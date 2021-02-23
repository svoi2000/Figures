#include "stdafx.h"
#include "Triangle.h"

Triangle::Triangle(int x1_ini, int y1_ini, int x2_ini, int y2_ini, int x3_ini, int y3_ini) {
	x1 = x1_ini;
	y1 = y1_ini;
	x2 = x2_ini;
	y2 = y2_ini;
	x3 = x3_ini;
	y3 = y3_ini;
}

int Triangle::get_x1() const {
	return x1;
}

int Triangle::get_y1() const {
	return y1;
}

int Triangle::get_x2() const {
	return x2;
}

int Triangle::get_y2() const {
	return y2;
}

int Triangle::get_x3() const {
	return x3;
}

int Triangle::get_y3() const {
	return y3;
}

Triangle::~Triangle()
{
}