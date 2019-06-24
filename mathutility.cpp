#include "mathutility.h"


Profiler::~Profiler()
{
    stop();

    if(isPrintEnd)
    {
        auto number = time_span.count();
        std::cout.width(12);    //ширина поля 12 символов
        std::cout.precision(6); //точность 6 цифры
        std::cout << std::fixed << number << std::endl;
    }
}

void Profiler::start()
{
    start_point = high_resolution_clock::now();
}

void Profiler::stop()
{
    time_span = duration_cast<duration<double>>(high_resolution_clock::now() - start_point);
}


