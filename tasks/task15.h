#ifndef TASK15_H
#define TASK15_H

#include "itask.h"

#include <map>
#include <unordered_map>

using KeyResType = std::pair<ITask::ResType, ITask::ResType>;

template<typename Key>
struct MyHash
{
    size_t operator()(const Key &k) const
    {
        size_t res = 42;
        res = res * 30 + k.first;
        res = res * 31 + k.second;
        return res;
    }
};

struct compar
{
    bool operator() (const KeyResType& lll, const KeyResType& rrr) const
    {
        return lll.first < rrr.first;
    }
};

class Task15 : public ITask
{

public:

    virtual ResType Process() override;

    virtual std::string getDescriptionEng() override;

    virtual std::string getDescriptionRus() override;

    ResType countRoutes(ResType m, ResType n);

private:
    std::unordered_map<std::pair<ResType, ResType>, ResType, MyHash<std::pair<ResType, ResType>>> mapRoutes;
    //std::map< std::pair<ResType, ResType>, ResType> mapRoutes;
};

#endif // TASK15_H
