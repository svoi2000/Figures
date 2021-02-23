#pragma once

//����� "�������������"

class Rectang
{
public:
	
	Rectang(int, int, int, int);			//� �����������  ���������� ���������� ����� �������
											//� ������ ������ ������ ��������������

	//������� ��������� ����� ������� � ������ ������ ������ ��������������
	int get_left() const;
	int get_top() const;
	int get_right() const;
	int get_bottom() const;

	~Rectang();
	
private:

	//���������� ����� ������� � ������ ������ ������ ��������������
	int left;
	int top;
	int right;
	int bottom;
};

