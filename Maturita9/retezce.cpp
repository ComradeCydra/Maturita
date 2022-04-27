#include <cstring>
#include <iostream>
#include "retezce.h"

using namespace std;

void strdel(char *s, int pozice, int pocet){
    int i = pozice;

    do{
        s[i] = s[i+pocet];
        i++;
    } while (s[i-1] != 0);
}

void strins (char *s1, char *s2, int pozice){
    int delkas2 = strlen(s2);
    int delkas1 = strlen(s1);
    int i = pozice;
    int j = 0;

    if(i > delkas1){
            std::cout << "Pozor: pozice je vetsi nez delka retezce!" << std::endl;
            return;
    }

    do{
            s1[delkas1+delkas2] = s1[delkas1];
            delkas1--;
    } while (delkas1 >= i);

    do{
        s1[i] = s2[j];
        i++;
        j++;
    } while (j < delkas2);

}
