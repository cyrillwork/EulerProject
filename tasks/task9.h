#ifndef TASK9_H
#define TASK9_H


#include "itask.h"

class Task9 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};

#endif // TASK9_H
