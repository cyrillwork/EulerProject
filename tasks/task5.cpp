#include "task5.h"

ITask::ResType Task5::Process()
{
    result = 0;

    const ITask::ResType MAX_NUMBER = 1000000000;
    const unsigned long N = 20;

    result = N;

    while (true)
    {
        bool isNeed = true;

        if(isEven(result) && ((result % 20) == 0))
        {
            for(unsigned int i = 2; i < N; ++i)
            {
                if( (result % i) != 0)
                {
                    isNeed = false;
                    break;
                }
            }
        }
        else
        {
            isNeed = false;
        }

        if(isNeed)
        {
            break;
        }

        ++result;
        if(result > MAX_NUMBER)
        {
            result = -1;
            break;
        }
    }

    return result;
}

std::string Task5::getDescriptionEng()
{
    return std::string("Task 5\n"
                       "2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.\n"
                       "What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?");
}

std::string Task5::getDescriptionRus()
{
    return std::string("Задача 5\n"
                       "2520 - самое маленькое число, которое делится без остатка на все числа от 1 до 10.\n"
                       "Какое самое маленькое число делится нацело на все числа от 1 до 20?");
}
