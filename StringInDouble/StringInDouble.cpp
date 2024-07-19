#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    system("color 70");
    system("chcp 1251>nul");

    string textNum1;
    string textNum2;

    cout << " Введите целую часть числа и дробную: ";             // Запрашиваем данные
    cin >> textNum1 >> textNum2;                                  // Вводим данные через пробел

    textNum1 += '.' + textNum2 ;                                  // Складываем строки вставив между ними разделяющую точку
    double num = stod(textNum1);                                  // Методом stod переводим string в double
   
    cout << '\t' << setprecision(textNum1.size()) << num << endl; // setpresision используется для предотвращения округления в cout

    system("pause>nul");
    return 0;
}