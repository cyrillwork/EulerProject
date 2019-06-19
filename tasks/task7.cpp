#include "task7.h"

ITask::ResType Task7::Process()
{
    result = 0;
    int count   = 1;


    while(true)
    {
        if(isPrime(result))
        {
            ++count;
            //cout << count << " " << number << endl;
        }
        ++result;
        if(count == 10001)
        {
            break;
        }
    }

    return result;
}

std::string Task7::getDescriptionEng()
{
    return std::string("Task 7\n"
    "What is the 10 001st prime number?");
}

std::string Task7::getDescriptionRus()
{
    return std::string("Задача 7\n"
    "Какое число является 10001-ым простым числом?");
}
