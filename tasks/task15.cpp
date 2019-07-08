#include "task15.h"

ITask::ResType Task15::Process()
{
    mapRoutes.clear();
    result = countRoutes(20, 20);

    return result;
}

std::string Task15::getDescriptionEng()
{
    return std::string("Task 15\n"
    "How many such routes are there through a 20×20 grid?" );
}

std::string Task15::getDescriptionRus()
{
    return std::string("Задача 15\n"
                       "Сколько существует таких маршрутов в сетке 20×20?");
}

ITask::ResType Task15::countRoutes(ITask::ResType m, ITask::ResType n)
{
    if((n == 0) || (m == 0))
    {
        return 1;
    }

    auto p = std::make_pair(m, n);

    auto it = mapRoutes.find(p);
    if(it != mapRoutes.end())
    {
        return it->second;
    }

    auto res = countRoutes(m, n - 1) + countRoutes(m - 1, n);

    mapRoutes.insert(std::make_pair(std::make_pair(m, n), res));

    return res;
}
