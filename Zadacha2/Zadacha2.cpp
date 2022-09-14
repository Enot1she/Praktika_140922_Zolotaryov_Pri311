#include <iostream>
#include <clocale>

using namespace std;


int smm(int num1, int num2) { // Создание функции суммирования
    int res = 0; // Объявляем результирующую переменную
    res = num1 + num2; // Записываем результат
    return res; // Возвращаем результат
}

int main()
{
    setlocale(LC_ALL, "Russian"); // Устанавливаем локаль на Русс.яз.
    int num1 = 0, num2 = 0; // Объявляем число1, число2 и присваем нач. значение
    cout << "Введите первое число \n";
    cin >> num1;
    cout << "Введите второе число \n";
    cin >> num2;
    // Выводим в консоль текст и считываем из неё числа
    cout << num1 << " + " << num2 << " == " << smm(num1, num2); // Вывод в консоль
}

