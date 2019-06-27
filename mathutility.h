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

template <typename ull = int long long>
ull sum_pow1(int N)
{
    ull sum1 = 0;
    for(int i=1; i<=N; ++i)
    {
        sum1 += i*i;
    }
    return sum1;
}

template <typename ull = int long long>
ull sum_pow2(int N)
{
    ull sum1 = 0;

    for(int i=1; i<=N; ++i)
    {
        sum1 += i;
    }
    return sum1*sum1;
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

template <typename T>
T getTriangularNumber(T number)
{
    return (number*(number + 1))/2;
}

template<typename T>
T divisors(T x)
{
    T limit = x;
    T numberOfDivisors = 0;

    if (x == 1) return 1;

    for (T i = 1; i < limit; ++i)
    {
        if (x % i == 0)
        {
            limit = x / i;
            if (limit != i)
            {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }
    return numberOfDivisors;
}

template <typename T>
void funcCollatz(T number, T &countChain)
{
    ++countChain;
    if(number == 1)
    {
        return;
    }

    if(isEven(number))
    {
        funcCollatz(number/2, countChain);
    }
    else
    {
        funcCollatz(3*number + 1, countChain);
    }
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
