#include "PremiumManga.h"

PremiumManga::PremiumManga()
    : PremiumComic()
{
    offlineReading = false;
}

PremiumManga::PremiumManga(int id,
                           string title,
                           string author,
                           double price,
                           double monthlyFee,
                           string imageQuality,
                           bool offlineReading)
    : PremiumComic(id,
                   title,
                   author,
                   price,
                   monthlyFee,
                   imageQuality)
{
    this->offlineReading = offlineReading;
}

void PremiumManga::describe() const
{
    PremiumComic::describe();

    cout << "Doc Offline: ";

    if (offlineReading)
        cout << "Co" << endl;
    else
        cout << "Khong" << endl;

    cout << "Gia sau cung: "
         << getFinalPrice() << endl;
}

double PremiumManga::getFinalPrice() const
{
    double total = price + monthlyFee;

    if (total > 300000)
    {
        return total * 0.85; // giảm 15%
    }

    return total;
}

PremiumManga::~PremiumManga()
{

}
