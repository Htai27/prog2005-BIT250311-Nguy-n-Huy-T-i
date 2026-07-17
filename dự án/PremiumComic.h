#ifndef PREMIUMCOMIC_H
#define PREMIUMCOMIC_H

#include "Comic.h"
#include "Rateable.h"

class PremiumComic : public Comic, public Rateable
{
protected:
    double monthlyFee;
    string imageQuality;
    int rating;

public:
    PremiumComic();

    PremiumComic(int id,
                 string title,
                 string author,
                 double price,
                 double monthlyFee,
                 string imageQuality);

    void describe() const override;

    double getFinalPrice() const override;

    void rate(int stars) override;

    virtual ~PremiumComic();
};

#endif
