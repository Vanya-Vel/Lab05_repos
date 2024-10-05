// Lab_05_3.cpp
// < ������� ���� >
// ����������� ������ � 5.3
// �������, �� ������ ������������ �� ����� � ������������ ��������������
// ������ 0.4

#include <iostream>
#include <cmath>

using namespace std;


double z(const double x);

int main()
{
    double pp, pk, b;  // ���� ��� ����������� � �������� ������� ��������� p �� ���������� b.
    int n;  // ʳ������ �����.

    // �������� ����������� � �������� ������� p, �� ������� �����.
    cout << "pp = "; cin >> pp;
    cout << "pk = "; cin >> pk;
    cout << "n = "; cin >> n;

    // ���������� �����.
    double dg = (pk - pp) / n;
    double p = pp;

    // ���� ��� ���������� ������� ������� �� �������� [pp, pk].
    while (p <= pk)
    {
        // ���������� �������� b ����� ��� ������� ������� z.
        b = z(p * p + 1) - z(p * p - 1) + 2 * z(p);
        cout << "result p " << p << "  result b " << b << endl;  // ��������� ����������.
        p += dg;  // ��������� p �� ����.
    }

    return 0;  // ���������� ��������.
}

// ��������� ������� z.
double z(const double x)
{
    // ���� |x| >= 1, ������������� ���� �������.
    if (abs(x) >= 1)
        return (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
    else  // ���� |x| < 1, ���������� ����� ���.
    {
        double S = 0;  // ��������� ���� ����.
        double a = 1;  // ���������� �������.

        for (int k = 0; k <= 6; k++)  // ���������� ��� �� 6-�� �����.
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