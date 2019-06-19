#ifndef TASK7_H
#define TASK7_H

#include "itask.h"

class Task7 : public ITask
{
public:
    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

};

#endif // TASK7_H
