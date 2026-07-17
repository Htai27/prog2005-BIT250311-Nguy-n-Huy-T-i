#include "Website.h"

Website::Website()
{
    websiteName = "";
    totalComics = 0;
}

Website::Website(string websiteName, int totalComics)
{
    this->websiteName = websiteName;
    this->totalComics = totalComics;
}

void Website::displayInfo() const
{
    cout << "\n========== WEBSITE ==========" << endl;
    cout << "Ten website: " << websiteName << endl;
    cout << "Tong so truyen: " << totalComics << endl;
    cout << "=============================" << endl;
}
