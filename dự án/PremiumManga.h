#ifndef PREMIUMMANGA_H
#define PREMIUMMANGA_H

#include "PremiumComic.h"

class PremiumManga : public PremiumComic
{
private:
    bool offlineReading;

public:
    PremiumManga();

    PremiumManga(int id,
                 string title,
                 string author,
                 double price,
                 double monthlyFee,
                 string imageQuality,
                 bool offlineReading);

    void describe() const override;

    double getFinalPrice() const override;

    ~PremiumManga();
};

#endif
