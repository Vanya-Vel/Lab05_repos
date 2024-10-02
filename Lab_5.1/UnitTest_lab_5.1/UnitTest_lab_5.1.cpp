#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab51
{
	TEST_CLASS(UnitTestlab51)
	{
	public:

        TEST_METHOD(TestMethod2)
        {
            // ���� ��� ���������� ����� c �� ����� ������� ������� p � q
            double p = 1.0;
            double q = 2.0;

            // ���������� �������� c
            double c = (k(1 + p, q * q) * k(1 + p, q * q) - k(q * p, 1)) / (1 + k(p * p, q));

            double expected = -0.971176;  // �������� ��� ���������� p � q

            // ���������� ��������� � ����������, � ������� �� 0.0001
            Assert::AreEqual(expected, c, 0.0001);
        }
	};
}
