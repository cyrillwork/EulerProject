#ifndef TASK16_H
#define TASK16_H

#include "itask.h"

class Task16 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};


#endif // TASK16_H
