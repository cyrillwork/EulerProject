#include "itask.h"

void ITask::ProcessProfiler()
{
    Profiler p;
    p.start();
    Process();
    p.stop();
    std::cout << "timeing process = " << p << std::endl;
}

ITask::ResType ITask::getResult()
{
    return result;
}
