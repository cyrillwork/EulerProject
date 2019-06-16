#include "task3.h"

ITask::ResType Task3::Process()
{
    result = 0;
    ResType Number = 600851475143;

    for(auto i = 0; i < sqrt(Number); i++)
    {
        if((i % 1000000) == 0)
        {
            std::cout << "i=" << i <<" result = " << result << std::endl;
        }

        if( ( !isEven(i) )  && ((Number % i) == 0) && (( i % 3) != 0)  && (isPrime(i)) )
        {
            result = i;
        }
    }
    return result;
}

std::string Task3::getDescriptionEng()
{
    return std::string("Task 3\n"
    "The prime factors of 13195 are 5, 7, 13 and 29."
    "What is the largest prime factor of the number 600851475143 ?");
}

std::string Task3::getDescriptionRus()
{
    return std::string("Задача 3\n"
    "Простые делители числа 13195 - это 5, 7, 13 и 29."
    "Каков самый большой делитель числа 600851475143, являющийся простым числом?");
}
