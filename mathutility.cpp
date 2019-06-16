#include "mathutility.h"


Profiler::~Profiler()
{
    stop();

    if(isPrintEnd)
    {
        std::cout << this->time_span.count() << std::endl;
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

