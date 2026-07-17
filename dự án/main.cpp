#include <iostream>

#include "Comic.h"
#include "FreeComic.h"
#include "PremiumComic.h"
#include "PremiumManga.h"
#include "Website.h"

using namespace std;

int main()
{
    Website web("NetTruyen Plus", 4);

    web.displayInfo();

    FreeComic comic1(
        1,
        "Doraemon",
        "Fujiko F. Fujio",
        50000,
        800,
        "Thieu nhi");

    FreeComic comic2(
        2,
        "Conan",
        "Aoyama Gosho",
        60000,
        1100,
        "Trinh tham");

    PremiumComic comic3(
        3,
        "One Piece",
        "Eiichiro Oda",
        250000,
        50000,
        "Full HD");

    PremiumManga comic4(
        4,
        "Solo Leveling",
        "Chugong",
        350000,
        60000,
        "4K",
        true);

    cout << "\n===== THONG TIN TRUYEN =====\n" << endl;

    comic1.describe();
    cout << endl;

    comic2.describe();
    cout << endl;

    comic3.describe();
    comic3.rate(5);
    cout << endl;

    comic4.describe();
    comic4.rate(4);
    cout << endl;

    compareComics(comic3, comic4);

    double revenue =
        comic3.getFinalPrice() +
        comic4.getFinalPrice();

    cout << "\n===== DOANH THU =====" << endl;
    cout << "Tong doanh thu truyen VIP: "
         << revenue << endl;

    return 0;
}
