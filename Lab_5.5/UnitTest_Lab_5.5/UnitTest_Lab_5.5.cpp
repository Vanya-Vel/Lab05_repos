#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab55
{
	TEST_CLASS(UnitTestLab55)
	{
	public:
		
        TEST_METHOD(Test_Ackermann)
        {
            int depth = 0; // Ініціалізуємо змінну для відстеження глибини рекурсії
            Assert::AreEqual(3, ackermann(1, 1, depth));  // A(1, 1) = 3
            Assert::AreEqual(3, ackermann(2, 0, depth));  // A(2, 0) = 3
            Assert::AreEqual(2, ackermann(0, 1, depth));  // A(0, 1) = 2
        }

        TEST_METHOD(Test_Ackermann_Depth)
        {
            int depth = 0; // Ініціалізуємо змінну для відстеження глибини рекурсії
            ackermann(1, 1, depth); // Викликаємо функцію ackermann з аргументами 1, 1
            Assert::IsTrue(depth > 0);  // Перевірка, що глибина рекурсії збільшилася
        }
    };
}