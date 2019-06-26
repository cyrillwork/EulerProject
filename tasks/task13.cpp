#include "task13.h"
#include "stringtokenizer.h"

Task13::Task13()
{
    StringTokenizer sss(strNumber);

    arrayNumbers.reserve(100);

    while(sss.hasMoreTokens())
    {
        arrayNumbers.emplace_back(BigNumber(sss.nextToken()));
    }

//    for(const auto &iii: arrayNumbers)
//    {
//        std::cout << iii << std::endl;
//    }

}

ITask::ResType Task13::Process()
{
    result = 0;

    BigNumber summ1;

    for(const auto &iii: arrayNumbers)
    {
        summ1 += iii;
    }

    std::cout << "result = " << summ1 << std::endl;

    return result;
}

std::string Task13::getDescriptionEng()
{
    return std::string("Task 13\n") +
    getStringNumber() +
    std::string("\nWork out the first ten digits of the sum of the following one-hundred 50-digit numbers.");
}

std::string Task13::getDescriptionRus()
{
    return std::string("Задача 13\n") +
           getStringNumber() +
           std::string("\nНайдите первые десять цифр суммы следующих ста 50-значных чисел.");
}

string Task13::getStringNumber() const
{
    std::string str1;
    str1.reserve(500);

    for(const auto &iii: arrayNumbers)
    {
        str1 += iii.getDecString();
        str1 += "\n";
    }

    return std::string(str1);
}
