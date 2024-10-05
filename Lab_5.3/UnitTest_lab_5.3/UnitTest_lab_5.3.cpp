#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab53
{
	TEST_CLASS(UnitTestlab53)
	{
	public:
		
        TEST_METHOD(TestPositiveX)
        {
            double expected = (sin(2.0) + 1) / (cos(2.0) * cos(2.0) + exp(2.0));
            // Перевіряємо, що результат функції z(2.0) приблизно дорівнює очікуваному значенню
            Assert::AreEqual(expected, z(2.0), 1e-5);
        }

        // Метод для тестування негативних значень x
        TEST_METHOD(TestNegativeX)
        {
            double expected = (sin(-2.0) + 1) / (cos(-2.0) * cos(-2.0) + exp(-2.0));
            // Перевіряємо, що результат функції z(-2.0) приблизно дорівнює очікуваному значенню
            Assert::AreEqual(expected, z(-2.0), 1e-5);
        }

        // Метод для тестування x = -0.84
        TEST_METHOD(TestXEqualOne)
        {
            double expected = exp(1 / (-0.84 * (-0.84))) * -0.626874; // -0.626874 це сума S
            // Перевіряємо, що результат функції z(-0.84) приблизно дорівнює очікуваному значенню
            Assert::AreEqual(expected, z(-0.84), 1e-5);
        }
	};
}
