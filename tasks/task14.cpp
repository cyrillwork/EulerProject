#include "task14.h"

ITask::ResType Task14::Process()
{
    ResType number      = 999999;
    ResType countChain;

    ResType maxChain = 0;
    ResType maxNumber = 0;

    result = 0;

    while(number > 13)
    {
        countChain = 0;
        funcCollatz(number, countChain);

        if(countChain > maxChain)
        {
            maxChain = countChain;
            maxNumber = number;
        }

        --number;
    }


    std::cout << "Max number " << maxNumber << std::endl;
    result = maxChain;

    return result;
}

std::string Task14::getDescriptionEng()
{
    return std::string("Task 14\n"
    "Which starting number, under one million, produces the longest Collatz chain?");
}

std::string Task14::getDescriptionRus()
{
    return std::string("Задача 14\n"
    "Какой начальный элемент меньше миллиона генерирует самую длинную последовательность Коллатца?");
}
