#include "task6.h"

ITask::ResType Task6::Process()
{
    result = 0;
    const int N = 100;

    result =  sum_pow2(N) - sum_pow1(N) ;

    return result;
}

std::string Task6::getDescriptionEng()
{
    return std::string("Task 6\n"
    "Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.");
}

std::string Task6::getDescriptionRus()
{
    return std::string("Задача 6\n"
    "Найдите разность между суммой квадратов и квадратом суммы первых ста натуральных чисел.");
}
