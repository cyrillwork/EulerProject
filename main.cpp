#include "tasks/task1.h"
#include "tasks/task2.h"

#include <vector>
#include <memory>

//void Task3()
//{
//    unsigned long long summ = 0;
//    unsigned long long Number = 600851475143;

//    for(auto i = summ; i < Number; i++)
//    {
//        if((i % 1000000) == 0)
//        {
//            cout << "i=" << i <<" summ = " << summ << endl;
//        }

//        if( ( !isEven(i) )  && ((Number % i) == 0) && (( i % 3) != 0)  && (isPrime(i)) )
//        {
//            summ = i;
//            //cout << "i=" << i <<" summ = " << summ << endl;
//            //break;
//        }
//    }
//    cout << "Task3 number=" << summ << endl;
//}





//void Task4()
//{
//    size_t res = 0;

//    for(size_t iii = 100; iii < 1000; ++iii)
//    {
//        for(size_t jjj = 100; jjj < 1000; ++jjj)
//        {
//            auto _mul = iii*jjj;
//            if( isPalendrom(_mul) && (_mul > res) )
//            {
//                res = _mul;
//            }
//        }
//    }

//    cout << "Task4 res=" << res << endl;
//}


int main(int argc, char *argv[])
{
    std::cout << "Euler project" << std::endl << std::endl;

    std::vector<std::shared_ptr<ITask>> arrayTasks = {
        std::make_shared<Task1>(),
        std::make_shared<Task2>() };

    for(auto &iii: arrayTasks)
    {
        std::cout << iii->getDescriptionEng() << std::endl;
        iii->ProcessProfiler();
        std::cout << "result = " << iii->getResult() << std::endl << std::endl;
    }

    return 0;
}
