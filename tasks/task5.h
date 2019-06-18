#ifndef TASK5_H
#define TASK5_H

#include "itask.h"

class Task5 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};

#endif // TASK5_H
