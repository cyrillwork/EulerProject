#ifndef TASK17_H
#define TASK17_H

#include "itask.h"
#include <map>
#include <string>

class Task17 : public ITask
{
public:
    using map = std::map<int, std::string>;

    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

    std::string getStringNumber(int num, const map & _map);

private:
    map array_1_9 =
    {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"}
    };
    map array_10_19 =
    {
        {10, "ten"},
        {11, "eleven"},
        {12, "twelve"},
        {13, "thirteen"},
        {14, "fourteen"},
        {15, "fifteen"},
        {16, "sixteen"},
        {17, "seventeen"},
        {18, "eighteen"},
        {19, "nineteen"},
    };
    map array_20_90 =
    {
        {20, "twenty"},
        {30, "thirty"},
        {40, "forty"},
        {50, "fifty"},
        {60, "sixty"},
        {70, "seventy"},
        {80, "eighty"},
        {90, "ninety"}
    };

    map array_100_900 =
    {
        {100, "onehundred"},
        {200, "twohundred"},
        {300, "threehundred"},
        {400, "fourhundred"},
        {500, "fivehundred"},
        {600, "sixhundred"},
        {700, "sevenhundred"},
        {800, "eighthundred"},
        {900, "ninehundred"}
    };

    std::string _1000 = std::string("onethousand");

};

#endif // TASK17_H
