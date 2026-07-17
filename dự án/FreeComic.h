#ifndef FREECOMIC_H
#define FREECOMIC_H

#include "Comic.h"

class FreeComic : public Comic
{
private:
    int chapters;
    string category;

public:
    FreeComic();

    FreeComic(int id,
              string title,
              string author,
              double price,
              int chapters,
              string category);

    void describe() const override;

    double getFinalPrice() const override;

    ~FreeComic();
};

#endif
