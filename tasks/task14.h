#ifndef TASK14_H
#define TASK14_H

#include "itask.h"

class Task14 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};

#endif // TASK14_H
