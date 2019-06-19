#ifndef MATHUTILITY_H
#define MATHUTILITY_H

#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>


template<typename T>
bool isEven(T Number)
{
    return ((Number & 1) == 0);
}

template <typename T>
bool isPrime(T n)
{
    for (T i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

template <typename T>
bool isPalendrom(T number)
{
    std::string str1(std::to_string(number));
    std::string str2;
    str2.resize(str1.size());
    std::reverse_copy(str1.begin(), str1.end(), str2.begin());
    return str1 == str2;
}

using namespace std::chrono;

class Profiler
{
public:
    Profiler(bool endPrint = false):
        isPrintEnd(endPrint),
        start_point(high_resolution_clock::now())
    {}

    ~Profiler();

    void start();

    void stop();

    friend std::ostream& operator << (std::ostream& s, const Profiler &p)
    {
        s.width(12);
        s.precision(7);
        s << std::fixed << p.time_span.count() << " sec";
        return s;
    }

private:
    bool isPrintEnd;
    high_resolution_clock::time_point start_point;
    duration<double> time_span = {};
};


#endif // MATHUTILITY_H
