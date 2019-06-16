#ifndef TASK3_H
#define TASK3_H

#include "itask.h"

class Task3 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;
};

#endif // TASK3_H
