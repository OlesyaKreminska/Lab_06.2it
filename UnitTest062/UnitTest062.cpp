#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.2 it/Lab_06.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        // Тестування функції create
        TEST_METHOD(TestMethodCreate)
        {
            const int SIZE = 10;
            int arr[SIZE];
            create(arr, -19, 25, SIZE);  // Генеруємо масив

            bool all_within_range = true;
            for (int i = 0; i < SIZE; i++) {
                if (arr[i] < -19 || arr[i] > 25) {
                    all_within_range = false;
                    break;
                }
            }
            Assert::IsTrue(all_within_range);  // Перевіряємо, що всі елементи в межах діапазону
        }
    }
    ;
}