#pragma once

//Класс "Окружность"

class Circle
{
public:
	Circle(int, int, int);                     //В конструктор передаются координаты центра и радиус
	int get_x_center() const;
	int get_y_center() const;
	int get_radius() const;

	~Circle();
	
private:
	int x_center;
	int y_center;
	int radius;
};

