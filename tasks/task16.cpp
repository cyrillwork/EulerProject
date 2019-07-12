#include "task16.h"
#include "bignumber.h"
#include <numeric>

ITask::ResType Task16::Process()
{
    result = 0;

    BigNumber big = {2};
    BigNumber big_2 = {2};

    for(size_t i=1; i<1000; ++i)
    {
        big = big * big_2;
    }

    std::string str1 = big.getDecString();

//    for(const auto &i : str1)
//    {
//        result += charToInt(i);
//    }

    result = std::accumulate(str1.begin(), str1.end(), result,
        [](ITask::ResType res, char i) -> ITask::ResType
        {
             return res + charToInt(i);
        });

    return result;
}

std::string Task16::getDescriptionEng()
{
    return std::string("Task 16\n"
    "What is the sum of the digits of the number 2^1000?");
}

std::string Task16::getDescriptionRus()
{
    return std::string("Задача 16\n"
    "Какова сумма цифр числа 2^1000?");
}
