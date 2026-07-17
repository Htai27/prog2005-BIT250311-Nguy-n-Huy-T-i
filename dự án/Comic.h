#ifndef COMIC_H
#define COMIC_H

#include <iostream>
#include <string>

using namespace std;

class Comic
{
protected:
    int id;
    string title;
    string author;
    double price;

public:
    Comic();
    Comic(int id, string title, string author, double price);

    virtual void describe() const;

    virtual double getFinalPrice() const;

    friend void compareComics(const Comic& c1, const Comic& c2);

    virtual ~Comic();
};

#endif
