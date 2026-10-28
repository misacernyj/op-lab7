#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A, B;

    cout << "Введіть перше двозначне число: ";
    cin >> A;

    cout << "Введіть друге двозначне число: ";
    cin >> B;

    int tensA = A / 10;
    int unitsA = A % 10;
    int tensB = B / 10;
    int unitsB = B % 10;

    (tensA + tensB <= unitsA + unitsB)
        ? cout << "True" << endl
        : cout << "False" << endl;

    system("pause");
    return 0;
}