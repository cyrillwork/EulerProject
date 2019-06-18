#include "omp.h"

#include "tasks/task1.h"
#include "tasks/task2.h"
#include "tasks/task3.h"
#include "tasks/task4.h"
#include "tasks/task5.h"
#include "tasks/task9.h"

#include <vector>
#include <memory>

int main(int argc, char *argv[])
{
    std::cout << "Euler project" << std::endl << std::endl;

    std::vector<std::shared_ptr<ITask>> arrayTasks =
    {
        std::make_shared<Task5>()
        //std::make_shared<Task1>(),
        //std::make_shared<Task2>(),
        //std::make_shared<Task3>(),
        //std::make_shared<Task4>(),
        //std::make_shared<Task9>()
    };

    for(auto &iii: arrayTasks)
    {
        std::cout << iii->getDescriptionEng() << std::endl;
        iii->ProcessProfiler();
        std::cout << "result = " << iii->getResult() << std::endl << std::endl;
    }

    return 0;
}
