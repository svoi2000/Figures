#pragma once

//����� "����������"

class Circle
{
public:
	Circle(int, int, int);                     //� ����������� ���������� ���������� ������ � ������
	int get_x_center() const;
	int get_y_center() const;
	int get_radius() const;

	~Circle();
	
private:
	int x_center;
	int y_center;
	int radius;
};

