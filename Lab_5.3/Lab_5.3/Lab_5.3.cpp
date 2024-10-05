// Lab_05_3.cpp
// < Величко Іван >
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 0.4

#include <iostream>
#include <cmath>

using namespace std;


double z(const double x);

int main()
{
    double pp, pk, b;  // Змінні для початкового і кінцевого значень параметру p та результату b.
    int n;  // Кількість кроків.

    // Введення початкового і кінцевого значень p, та кількості кроків.
    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n = "; cin >> n;

    // Обчислення кроку.
    double dg = (pk - pp) / n;
    double p = pp;

    // Цикл для обчислення значень функції на інтервалі [pp, pk].
    while (p <= pk)
    {
        // Обчислення значення b через три виклики функції z.
        b = z(p * p + 1) - z(p * p - 1) + 2 * z(p);
        cout << "result p " << p << "  result b " << b << endl;  // Виведення результату.
        p += dg;  // Збільшення p на крок.
    }

    return 0;  // Завершення програми.
}

// Реалізація функції z.
double z(const double x)
{
    // Якщо |x| >= 1, використовуємо одну формулу.
    if (abs(x) >= 1)
        return (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
    else  // Якщо |x| < 1, обчислюємо через ряд.
    {
        double S = 0;  // Початкова сума ряду.
        double a = 1;  // Початковий доданок.

        for (int k = 0; k <= 6; k++)  // Обчислюємо ряд до 6-го члена.
        {
            int factorial = 1;
            for (int i = 1; i <= k; i++)
                factorial *= i;

            a *= pow(2, k) * pow(x, k) / factorial;
            S += a;
        }

        return exp(1 / (x * x)) * S;
    }
}