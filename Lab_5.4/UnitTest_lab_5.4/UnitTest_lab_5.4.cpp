#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab54
{
    TEST_CLASS(UnitTestlab54)
    {
    public:

        // Тест для функції S0
        TEST_METHOD(Test_S0)
        {
            int j = 1, N = 5;
            // Обчислюємо результат для функції S0 з параметрами j = 1 і N = 5
            double result = S0(j, N);

            // Очікуваний результат - 6, з точністю до 0.0001
            Assert::AreEqual(6, result, 0.0001);  // Перевіряємо, чи обчислений результат дорівнює 6
        }

        // Тест для функції S1
        TEST_METHOD(Test_S1)
        {
            int j = 1, N = 5;
            // Обчислюємо результат для рекурсивної функції S1, що починається з i = j (i = 1)
            double result = S1(j, N, j);

            // Очікуваний результат - 6, з точністю до 0.0001
            Assert::AreEqual(6, result, 0.0001);  // Перевіряємо, чи результат дорівнює 6
        }

        // Тест для функції S2
        TEST_METHOD(Test_S2)
        {
            int j = 1, N = 5;
            // Обчислюємо результат для рекурсивної функції S2, що починається з i = N (i = 5)
            double result = S2(j, N, N);

            // Очікуваний результат - 6, з точністю до 0.0001
            Assert::AreEqual(6, result, 0.0001);  // Перевіряємо правильність результату
        }

        // Тест для функції S3
        TEST_METHOD(Test_S3)
        {
            int j = 1, N = 5;
            // Викликаємо рекурсивну функцію S3 з накопиченням, початкове значення t = 0, і стартуємо з i = j
            double result = S3(j, N, j, 0);

            // Очікуваний результат - 6, з точністю до 0.0001
            Assert::AreEqual(6, result, 0.0001);  // Перевіряємо, чи результат правильний
        }

        // Тест для функції S4
        TEST_METHOD(Test_S4)
        {
            int j = 1, N = 5;
            // Викликаємо рекурсивну функцію S4 з накопиченням, початкове значення t = 0, і стартуємо з i = N
            double result = S4(j, N, N, 0);

            // Очікуваний результат - 6, з точністю до 0.0001
            Assert::AreEqual(6, result, 0.0001);  // Перевіряємо результат
        }
	};
}
