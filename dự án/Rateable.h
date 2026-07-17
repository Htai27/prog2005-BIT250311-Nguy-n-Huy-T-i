#ifndef RATEABLE_H
#define RATEABLE_H

class Rateable
{
public:
    virtual void rate(int stars) = 0;
    virtual ~Rateable() {}
};

#endif
