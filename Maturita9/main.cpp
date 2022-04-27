#include <iostream>
#include <cstring>
#include "retezce.h"

using namespace std;

int main()
{
    char veta[200];

    strcpy(veta, "Petr nema penize.");
    cout << veta << endl;
    strdel(veta, 5, 2);
    cout << veta << endl;

    strins(veta, "taky ne", 5);
    cout << veta << endl;

    return 0;
}
