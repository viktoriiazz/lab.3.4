// Lab_03_4.cpp
// < ���������� ³�����  >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((x > 0 && y > 0 && y == x * x && x * x + y * y >= R * R) || (x * x + y * y <= R * R))
	
		cout << "yes" << endl;
	else
		 cout << "no" << endl;

	cin.get();
	return 0;
}