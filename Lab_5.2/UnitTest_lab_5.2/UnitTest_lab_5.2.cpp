#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab52
{
	TEST_CLASS(UnitTestlab52)
	{
	public:

            TEST_METHOD(TestMethod_A)
        {
            // ����� ���
            double x = 2.0;
            int n = 1;
            double a = x;  // ���������� ������� ����

            // ������ ������� A
            A(x, n, a);

            // ���������� ��������� ���������� ������
            double expected = x * (-x * n / (n + 1.0));

            // �������� ����������
            Assert::AreEqual(expected, a, 0.0001);
        }

        // ���� ��� ������� L
        TEST_METHOD(TestMethod_L)
        {
            // ����� ���
            double x = 0.5;
            double eps = 0.0001;
            int n = 0;
            double s = 0;

            // ������ ������� L
            L(x, eps, n, s);

            // ��������� �������� ������� ln(x + 1) ��� ��������
            double expected = log(x + 1);

            // �������� ����������
            Assert::AreEqual(expected, s, 0.0001);
        }
	};
}