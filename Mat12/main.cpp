#include <iostream>

using namespace std;

struct TPRVEK{
    int hodnota;
    TPRVEK *dalsi;
};

TPRVEK *zacatek = NULL;

void vlozPrvek(int cislo){
    TPRVEK *pom = zacatek;
    TPRVEK *pom2;
    pom2 = new TPRVEK;
    pom2->hodnota = cislo;

    //pridani na zacatek
    if(zacatek == NULL or cislo < zacatek->hodnota){
        pom2->dalsi = zacatek;
        zacatek = pom2;
    }
    //pridani kamkoli jinam nez na zacatek
    else{
        while(pom->dalsi and cislo > pom->dalsi->hodnota){
            pom = pom->dalsi;
        }
        pom2->dalsi = pom->dalsi;
        pom->dalsi = pom2;
    }
}

void vypisSeznam(){
    TPRVEK *pom = zacatek;
    while(pom!=NULL){
        cout << pom->hodnota << " ";
        pom = pom->dalsi;
    }
}

int main()
{
    int cislo;
    do{
        cin >> cislo;
        vlozPrvek(cislo);
        vypisSeznam();
        cout << endl;
    }while(cislo >= 0);
}
