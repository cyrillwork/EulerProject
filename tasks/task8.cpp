#include "task8.h"

#include <cstring>

inline int charToInt(char ch)
{
    return (int)ch - (int)48;
}

ITask::ResType Task8::Process()
{
    const int N = 13;
    int len = strlen(gStrNumber);

    result = 0;

    for(int i = 0; i < (len - N); ++i)
    {
        int long long summ1 = 1;

        for(int j = 0; j < N; ++j)
        {
            if(gStrNumber[i + j] == '0')
            {
                break;
            }
            summ1 *= charToInt(gStrNumber[i + j]);
        }

        if(summ1 > result)
        {
            result = summ1;
        }
    }

    return result;
}

std::string Task8::getDescriptionEng()
{
    return std::string("Task 8\n"
    "Find the thirteen adjacent digits in the 1000-digit number that have the greatest product.\n"
    "What is the value of this product?\n") + std::string(gStrNumber);
}

std::string Task8::getDescriptionRus()
{
    return std::string("Задача 8\n"
    "Найдите наибольшее произведение тринадцати последовательных цифр в данном числе.\n") + std::string(gStrNumber);
}
