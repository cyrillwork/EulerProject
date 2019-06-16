#ifndef TASK4_H
#define TASK4_H

#include "itask.h"

class Task4 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;
};


#endif // TASK4_H
