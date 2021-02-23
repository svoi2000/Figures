#pragma once

//Класс "Треугольник"

class Triangle {

public:

	Triangle (int, int, int, int, int, int);			//В конструктор  передаются координаты вершин треугольника

	//Геттеры координат вершин треугольника
	int get_x1() const;
	int get_y1() const;
	int get_x2() const;
	int get_y2() const;
	int get_x3() const;
	int get_y3() const;

	~Triangle();
	   	
private:

	//Координаты вершин треугольника
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
};

