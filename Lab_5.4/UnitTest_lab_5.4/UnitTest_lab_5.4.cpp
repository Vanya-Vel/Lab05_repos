#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab54
{
    TEST_CLASS(UnitTestlab54)
    {
    public:

        // ���� ��� ������� S0
        TEST_METHOD(Test_S0)
        {
            int j = 1, N = 5;
            // ���������� ��������� ��� ������� S0 � ����������� j = 1 � N = 5
            double result = S0(j, N);

            // ���������� ��������� - 6, � ������� �� 0.0001
            Assert::AreEqual(6, result, 0.0001);  // ����������, �� ���������� ��������� ������� 6
        }

        // ���� ��� ������� S1
        TEST_METHOD(Test_S1)
        {
            int j = 1, N = 5;
            // ���������� ��������� ��� ���������� ������� S1, �� ���������� � i = j (i = 1)
            double result = S1(j, N, j);

            // ���������� ��������� - 6, � ������� �� 0.0001
            Assert::AreEqual(6, result, 0.0001);  // ����������, �� ��������� ������� 6
        }

        // ���� ��� ������� S2
        TEST_METHOD(Test_S2)
        {
            int j = 1, N = 5;
            // ���������� ��������� ��� ���������� ������� S2, �� ���������� � i = N (i = 5)
            double result = S2(j, N, N);

            // ���������� ��������� - 6, � ������� �� 0.0001
            Assert::AreEqual(6, result, 0.0001);  // ���������� ����������� ����������
        }

        // ���� ��� ������� S3
        TEST_METHOD(Test_S3)
        {
            int j = 1, N = 5;
            // ��������� ���������� ������� S3 � ������������, ��������� �������� t = 0, � �������� � i = j
            double result = S3(j, N, j, 0);

            // ���������� ��������� - 6, � ������� �� 0.0001
            Assert::AreEqual(6, result, 0.0001);  // ����������, �� ��������� ����������
        }

        // ���� ��� ������� S4
        TEST_METHOD(Test_S4)
        {
            int j = 1, N = 5;
            // ��������� ���������� ������� S4 � ������������, ��������� �������� t = 0, � �������� � i = N
            double result = S4(j, N, N, 0);

            // ���������� ��������� - 6, � ������� �� 0.0001
            Assert::AreEqual(6, result, 0.0001);  // ���������� ���������
        }
	};
}
