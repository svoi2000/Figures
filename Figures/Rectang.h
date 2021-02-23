#pragma once

//Класс "Прямоугольник"

class Rectang
{
public:
	
	Rectang(int, int, int, int);			//В конструктор  передаются координаты левой верхней
											//и правой нижней вершин прямоугольника

	//Геттеры координат левой верхней и правой нижней вершин прямоугольника
	int get_left() const;
	int get_top() const;
	int get_right() const;
	int get_bottom() const;

	~Rectang();
	
private:

	//Координаты левой верхней и правой нижней вершин прямоугольника
	int left;
	int top;
	int right;
	int bottom;
};

