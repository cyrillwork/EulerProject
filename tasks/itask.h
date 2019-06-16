#ifndef ITASK_H
#define ITASK_H

#include "mathutility.h"

class ITask
{
public:

    virtual ~ITask() = default;

    using ResType = int long long;

    virtual ResType Process() = 0;

    virtual std::string getDescriptionEng() = 0;

    virtual std::string getDescriptionRus() = 0;

    void ProcessProfiler();

    ResType getResult();

protected:

    ResType result{0};
};

#endif // ITASK_H

