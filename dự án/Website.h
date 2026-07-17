#ifndef WEBSITE_H
#define WEBSITE_H

#include <iostream>

using namespace std;

class Website final
{
private:
    string websiteName;
    int totalComics;

public:
    Website();
    Website(string websiteName, int totalComics);

    void displayInfo() const;
};

#endif
