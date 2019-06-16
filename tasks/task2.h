#ifndef TASK2_H
#define TASK2_H

#include "itask.h"

class Task2 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;
};

#endif // TASK2_H
