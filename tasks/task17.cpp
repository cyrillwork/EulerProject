#include "task17.h"
#include <assert.h>

ITask::ResType Task17::Process()
{
    result = 0;
    for(size_t i=1; i<=1000; ++i)
    {
        std::string str1;

        if(i == 1000)
        {
            str1 = _1000;
        }
        else
        {
            bool isHundred  = false;
            bool isAddAnd  = false;

            auto num1 = (i / 100) * 100;
            if(num1 > 0)
            {
                 str1 += getStringNumber(num1, array_100_900);
                 isHundred = true;
            }

            auto num2 = ( (i - num1) / 10) * 10;
            if(num2 > 10)
            {
                if(isHundred && (i - num1 - num2 > 0))
                {
                   str1 += "and";
                   isAddAnd = true;
                }

                str1 += getStringNumber(num2, array_20_90);
            }

            if(num2 == 10)
            {
                str1 += getStringNumber( i - num1, array_10_19);
            }
            else
            {

                auto num3 = i - num1 - num2;

                if(num3 > 0)
                {

                    if(isHundred && (!isAddAnd))
                    {
                        str1 += "and";
                    }

                    str1 += getStringNumber(num3, array_1_9);
                }
            }
        }

        result += str1.size();
        std::cout << "i=" << i << " " << str1 << " summ=" << result << std::endl;

        assert(str1.find("null") == std::string::npos);


    }

    return result;
}

std::string Task17::getDescriptionEng()
{
    return std::string("Task 17\n"
    "If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?");
}

std::string Task17::getDescriptionRus()
{
    return std::string("Задача 17\n"
                       "Сколько букв понадобится для записи всех чисел от 1 до 1000 (one thousand) включительно?");
}

std::string Task17::getStringNumber(int num, const map &_map)
{
    std::string str_res = {"null"};
    auto it = _map.find(num);

    if(it != _map.end())
    {
        str_res = it->second;
    }

    return std::string(str_res);

}
