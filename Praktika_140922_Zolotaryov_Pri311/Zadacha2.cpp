#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    int smm(int num1, int num2) {
        int res = 0;
        res = num1 + num2;
            return res
    }

    int num1 = 0, num2 = 0;
    cin >> "������� ������ �����" >> num1 >> "������� ������ �����" >> num2;
    cout<<num1 << " + " << num2 << " ==" << smm(num1, num2);
}

