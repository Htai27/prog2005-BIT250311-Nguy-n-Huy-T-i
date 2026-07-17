#include "Comic.h"

Comic::Comic()
{
    id = 0;
    title = "";
    author = "";
    price = 0;
}

Comic::Comic(int id, string title, string author, double price)
{
    this->id = id;
    this->title = title;
    this->author = author;
    this->price = price;
}

void Comic::describe() const
{
    cout << "==============================" << endl;
    cout << "ID: " << id << endl;
    cout << "Ten truyen: " << title << endl;
    cout << "Tac gia: " << author << endl;
    cout << "Gia: " << price << endl;
}

double Comic::getFinalPrice() const
{
    return price;
}

void compareComics(const Comic& c1, const Comic& c2)
{
    cout << "\n===== SO SANH GIA =====" << endl;

    if (c1.getFinalPrice() > c2.getFinalPrice())
    {
        cout << c1.title << " dat hon " << c2.title << endl;
    }
    else if (c1.getFinalPrice() < c2.getFinalPrice())
    {
        cout << c2.title << " dat hon " << c1.title << endl;
    }
    else
    {
        cout << "Hai truyen co gia bang nhau." << endl;
    }
}

Comic::~Comic()
{

}
