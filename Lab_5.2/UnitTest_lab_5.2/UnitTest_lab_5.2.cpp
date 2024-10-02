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
            // Вхідні дані
            double x = 2.0;
            int n = 1;
            double a = x;  // початковий доданок ряду

            // Виклик функції A
            A(x, n, a);

            // Очікуваний результат обчислений вручну
            double expected = x * (-x * n / (n + 1.0));

            // Перевірка результату
            Assert::AreEqual(expected, a, 0.0001);
        }

        // Тест для функції L
        TEST_METHOD(TestMethod_L)
        {
            // Вхідні дані
            double x = 0.5;
            double eps = 0.0001;
            int n = 0;
            double s = 0;

            // Виклик функції L
            L(x, eps, n, s);

            // Очікуване значення функції ln(x + 1) для перевірки
            double expected = log(x + 1);

            // Перевірка результату
            Assert::AreEqual(expected, s, 0.0001);
        }
	};
}