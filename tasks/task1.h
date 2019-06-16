#ifndef TASK1_H
#define TASK1_H

#include "itask.h"

class Task1 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};

#endif // TASK1_H
