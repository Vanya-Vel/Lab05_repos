// Lab_05_2.cpp
// < ������� ���� >
// ����������� ������ � 5.2
// ���������� ���� ���� ������� �� ��������� �������
// ������ 0.4

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void L(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
	// ���������� ������
	double xp, xk, x, dx, eps, a = 0, R = 0, s = 0;
	int n = 0;

	// �������� ����������� �� �������� ������� x, ����� dx, �� ������� eps
	cout << "xp = "; cin >> xp;  // ������� ��������� �������� x
	cout << "xk = "; cin >> xk;  // ������� ������ �������� x
	cout << "dx = "; cin >> dx;  // ������� ���� ���� x
	cout << "eps = "; cin >> eps;  // ������� ������� epsilon (eps)
	cout << fixed;  // Գ����� ������� ����� ���� ���� ��� ���������

	// ��������� ��������� �������
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"      // ³�������� ���� ��� �������� x (5 �������)
		<< setw(10) << "ln(x + 1)" << " |"      // ̳��� ��� ������� exp(x) (10 �������)
		<< setw(10) << "S" << " |"            // ̳��� ��� ���� ���� S (7 �������)
		<< setw(5) << "n" << " |"            // ̳��� ��� ������� �������� n (5 �������)
		<< endl;
	cout << "-------------------------------------------------" << endl;

	// ���� �� ��������� x �� xp �� xk � ������ dx
	x = xp;

	while (x <= xk)
	{
		L(x, eps, n, s);
		// ��������� ���������� � �������
		cout << "|" << setw(7) << setprecision(2) << x << " |"  // ��������� x � ������� �� 2 �����
			<< setw(10) << setprecision(5) << log(x + 1) << " |"    // ��������� ������� �������� exp(x)
			<< setw(10) << setprecision(5) << s << " |"         // ��������� ����������� �������� S
			<< setw(5) << n << " |"                             // ��������� ������� ��������
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}

void L(const double x, const double eps, int& n, double& s)
{
	n = 0; // ����� �������� �� ����� �������� �������
	double a = x; // ����� �������� �� ����� �������� �������
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
	double R = -x * n / (1.0 * n + 1); // ����� �������� �� ����� �������� �������
	a *= R;
}