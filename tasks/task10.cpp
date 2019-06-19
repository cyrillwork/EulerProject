#include "task10.h"


ITask::ResType Task10::Process()
{
    ITask::ResType MAX_NUMBER = 2000000;

    result = 0;

    auto number = 2;

    for(;;)
    {
        if(isPrime(number))
        {
            result += number;
        }

        ++number;

        if(number >= MAX_NUMBER)
        {
            break;
        }
    }

    return result;
}

std::string Task10::getDescriptionEng()
{
    return std::string("Task 10\n"
    "The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.\n"
    "Find the sum of all the primes below two million." );
}

std::string Task10::getDescriptionRus()
{
    return std::string("Задача 10\n"
    "Сумма простых чисел меньше 10 равна 2 + 3 + 5 + 7 = 17.\n"
    "Найдите сумму всех простых чисел меньше двух миллионов.");
}
