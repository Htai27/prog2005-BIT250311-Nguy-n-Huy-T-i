#include "FreeComic.h"

FreeComic::FreeComic()
    : Comic()
{
    chapters = 0;
    category = "";
}

FreeComic::FreeComic(int id,
                     string title,
                     string author,
                     double price,
                     int chapters,
                     string category)
    : Comic(id, title, author, price)
{
    this->chapters = chapters;
    this->category = category;
}

void FreeComic::describe() const
{
    Comic::describe();

    cout << "Loai: Truyen mien phi" << endl;
    cout << "So chuong: " << chapters << endl;
    cout << "The loai: " << category << endl;
    cout << "Gia cuoi: " << getFinalPrice() << endl;
}

double FreeComic::getFinalPrice() const
{
    return 0;
}

FreeComic::~FreeComic()
{

}
