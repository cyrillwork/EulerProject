#ifndef TASK6_H
#define TASK6_H

#include "itask.h"

class Task6 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};

#endif // TASK6_H
