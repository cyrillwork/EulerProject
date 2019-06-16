#include "task1.h"


ITask::ResType Task1::Process()
{
    result = 0;
    for(size_t i=3; i<1000; ++i)
    {
        if((i % 3) == 0)
        {
            result += i;
        }
        else
            if((i % 5) == 0)
            {
                result += i;
            }
    }
    return result;
}

std::string Task1::getDescriptionEng()
{
    return std::string("Task 1\n"
    "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.\n"
    "The sum of these multiples is 23.\n"
    "Find the sum of all the multiples of 3 or 5 below 1000." );
}

std::string Task1::getDescriptionRus()
{
    return std::string("Задача 1\n"
    "Если выписать все натуральные числа меньше 10, кратные 3 или 5, то получим 3, 5, 6 и 9.\n"
    "Сумма этих чисел равна 23.\n"
    "Найдите сумму всех чисел меньше 1000, кратных 3 или 5.");
}
