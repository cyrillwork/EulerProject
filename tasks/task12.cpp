#include "task12.h"


ITask::ResType Task12::Process()
{
    result = 0;

    const int N = 500;

    ResType number = 2;

    while(true)
    {
        result = getTriangularNumber(number);

        int countDiv = divisors(result);

        if(countDiv >= N)
        {
            break;
        }

        ++number;
    }

    return result;
}

std::string Task12::getDescriptionEng()
{
    return std::string("Task 12\n"
    "What is the value of the first triangle number to have over five hundred divisors?");
}

std::string Task12::getDescriptionRus()
{
    return std::string("Задача 12\n"
    "Каково первое треугольное число, у которого более пятисот делителей?");
}
