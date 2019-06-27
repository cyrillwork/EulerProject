#include "omp.h"

#include "tasks/task1.h"
#include "tasks/task2.h"
#include "tasks/task3.h"
#include "tasks/task4.h"
#include "tasks/task5.h"
#include "tasks/task6.h"
#include "tasks/task7.h"
#include "tasks/task8.h"
#include "tasks/task9.h"
#include "tasks/task10.h"
#include "tasks/task11.h"
#include "tasks/task12.h"
#include "tasks/task13.h"
#include "tasks/task14.h"

#include <vector>
#include <memory>


int main(int argc, char *argv[])
{
    std::cout << "Euler project" << std::endl << std::endl;

    std::vector<std::shared_ptr<ITask>> arrayTasks =
    {
//        std::make_shared<Task1>(),
//        std::make_shared<Task2>(),
//        std::make_shared<Task2>(),
//        std::make_shared<Task3>(),
//        std::make_shared<Task4>(),
//        std::make_shared<Task5>(),
//        std::make_shared<Task6>(),
//        std::make_shared<Task7>(),
//        std::make_shared<Task8>(),
//        std::make_shared<Task9>(),
//        std::make_shared<Task10>()

        std::make_shared<Task14>()

    };

    for(const auto &iii: arrayTasks)
    {
        std::cout << iii->getDescriptionEng() << std::endl;
        iii->ProcessProfiler();
        if(iii->getResult() > 0)
        {
            std::cout << "result = " << iii->getResult() << std::endl << std::endl;
        }
    }

    return 0;
}
