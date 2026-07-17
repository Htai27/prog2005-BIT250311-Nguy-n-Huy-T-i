#include "PremiumComic.h"

PremiumComic::PremiumComic()
    : Comic()
{
    monthlyFee = 0;
    imageQuality = "";
    rating = 0;
}

PremiumComic::PremiumComic(int id,
                           string title,
                           string author,
                           double price,
                           double monthlyFee,
                           string imageQuality)
    : Comic(id, title, author, price)
{
    this->monthlyFee = monthlyFee;
    this->imageQuality = imageQuality;
    rating = 0;
}

void PremiumComic::describe() const
{
    Comic::describe();

    cout << "Loai: Truyen Premium" << endl;
    cout << "Phi dang ky: " << monthlyFee << endl;
    cout << "Chat luong anh: " << imageQuality << endl;
    cout << "Danh gia: " << rating << "/5 sao" << endl;
    cout << "Gia cuoi: " << getFinalPrice() << endl;
}

double PremiumComic::getFinalPrice() const
{
    return price + monthlyFee;
}

void PremiumComic::rate(int stars)
{
    if (stars >= 1 && stars <= 5)
    {
        rating = stars;
        cout << title << " duoc danh gia "
             << rating << " sao." << endl;
    }
    else
    {
        cout << "Danh gia khong hop le!" << endl;
    }
}

PremiumComic::~PremiumComic()
{
}
