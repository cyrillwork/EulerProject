#include "task11.h"
#include <sstream>

Task11::Task11()
{
    std::istringstream sss(strMatrex);

    ResType i = 0;
    ResType j = 0;

    while(!sss.eof())
    {
        sss >> Matrex[j][i];

        ++i;
        if(i == N)
        {
            i = 0;
            ++j;
        }
        if(j == M)
        {
            break;
        }
    }

//    for(j = 0; j < M; ++j)
//    {
//        for(i = 0; i < N; ++i)
//        {
//            std::cout << Matrex[j][i]<< " ";
//        }
//        std::cout << std::endl;
//    }

}

ITask::ResType Task11::Process()
{
    const int MAX = 4;
    ResType product;
    result = 0;

    for(ResType j = 0; j < M; ++j)
    {
        for(ResType i = 0; i < N; ++i)
        {
            //horizontal
            product = Matrex[j][i];
            if(i + MAX < N)
            {
                for(ResType k = i + 1; k < i + MAX; ++k)
                {
                    product *= Matrex[j][k];
                }
                if(product > result)
                {
                    result = product;
                    resultIndexs.clear();
                    for(ResType k = 0; k < MAX; ++k)
                        resultIndexs.push_back(std::make_tuple(j, i+k, Matrex[j][i+k]));
                }
            }

            //vertical
            product = Matrex[j][i];
            if(j + MAX < M)
            {
                for(ResType k = j + 1; k < j + MAX; ++k)
                {
                    product *= Matrex[k][i];
                }
                if(product > result)
                {
                    result = product;
                    resultIndexs.clear();
                    for(ResType k = 0; k < MAX; ++k)
                        resultIndexs.push_back(std::make_tuple(j+k, i, Matrex[j+k][i]));

                }
            }

            //cross 1
            product = Matrex[j][i];
            if(   ((j + MAX) < M) && ((i + MAX) < N))
            {
                for(ResType k = 1; k < MAX; ++k)
                {
                    product *= Matrex[j+k][i+k];
                }
                if(product > result)
                {
                    result = product;
                    resultIndexs.clear();
                    for(ResType k = 0; k < MAX; ++k)
                        resultIndexs.push_back(std::make_tuple(j+k, i+k, Matrex[j+k][i+k]));
                }
            }

            //cross 2
            product = Matrex[j][i];
            if(   ((j + MAX) < M) && ((i - MAX) >= 0))
            {
                for(ResType k = 1; k < MAX; ++k)
                {
                    product *= Matrex[j+k][i-k];
                }
                if(product > result)
                {
                    result = product;
                    resultIndexs.clear();
                    for(ResType k = 0; k < MAX; ++k)
                        resultIndexs.push_back(std::make_tuple(j+k, i-k, Matrex[j+k][i-k]));

                }
            }

        }
    }

    for(const auto &iii : resultIndexs)
    {
        std::cout << "j=" << std::get<0>(iii) << " i=" << std::get<1>(iii) << " num=" << std::get<2>(iii) << std::endl;
    }

    return result;
}

std::string Task11::getDescriptionEng()
{
    return std::string("Task 11\n") +
    std::string(strMatrex) +
    std::string("\nWhat is the greatest product of four adjacent numbers in the same direction\n"
    "(up, down, left, right, or diagonally) in the 20x20 grid?");
}

std::string Task11::getDescriptionRus()
{
    return std::string("Задача 11\n") +
    std::string(strMatrex) +
    std::string("\nКаково наибольшее произведение четырех подряд идущих чисел в таблице 20×20,\n"
    "расположенных в любом направлении (вверх, вниз, вправо, влево или по диагонали)?");
}
