#ifndef TASK12_H
#define TASK12_H

#include "itask.h"

class Task12 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};
#endif // TASK12_H
