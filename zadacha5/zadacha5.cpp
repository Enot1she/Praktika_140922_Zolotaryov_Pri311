#include <iostream>
#include <clocale>

using namespace std;


double len_okr(int r) // ��������� ������� ���� double ��� ����� ���.
{
	int len;
	len = r * 2 * 3.14;
	return len;
}
double sq_okr(int r) // ��������� ������� ���� double ��� ����. ���.
{
	int sq;
	sq = r * r * 3.14;
	return sq;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int r = 0;
	cout<< "������� �������� �������:"<<endl;
	cin >> r;
	cout << "����� ���������� == " << len_okr(r) << endl;
	cout << "������� ���������� == " << sq_okr(r) << endl;
}