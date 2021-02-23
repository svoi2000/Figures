#include "stdafx.h"
#include "Rectang.h"


Rectang::Rectang(int left_ini, int top_ini, int right_ini, int bottom_ini)
{
	left = left_ini;
	top = top_ini;
	right = right_ini;
	bottom = bottom_ini;
}

int Rectang::get_left() const {
	return left;
}

int Rectang::get_top() const {
	return top;
}

int Rectang::get_right() const {
	return right;
}

int Rectang::get_bottom() const {
	return bottom;
}

Rectang::~Rectang()
{
}
