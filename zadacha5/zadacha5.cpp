#include <iostream>
#include <clocale>

using namespace std;


double len_okr(int r) // ќбъ€вл€ем функцию типа double дл€ длины окр.
{
	int len;
	len = r * 2 * 3.14;
	return len;
}
double sq_okr(int r) // ќбъ€вл€ем функцию типа double дл€ площ. окр.
{
	int sq;
	sq = r * r * 3.14;
	return sq;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int r = 0;
	cout<< "¬ведите величину радиуса:"<<endl;
	cin >> r;
	cout << "ƒлина окружности == " << len_okr(r) << endl;
	cout << "ѕлощадь окружности == " << sq_okr(r) << endl;
}