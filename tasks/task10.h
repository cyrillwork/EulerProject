#ifndef TASK10_H
#define TASK10_H

#include "itask.h"

class Task10 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};
#endif // TASK10_H
