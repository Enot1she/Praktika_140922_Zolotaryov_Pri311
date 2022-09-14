#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // Ставим локаль на русс.яз
    cout << "Привет мир!\n"; // Вывод в консоль
}

