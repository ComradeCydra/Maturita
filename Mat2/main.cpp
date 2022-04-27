#include <iostream>

using namespace std;

string zasifruj(string zprava, string klic){
    string zasifrovanost = "";
    int delkaZ, delkaK;

    delkaZ = zprava.length();
    delkaK = klic.length();

    int j = 0;
    for(int i=0; i<delkaZ; i++){
        char znak = zprava[i];
        znak = znak+klic[j]-64;
        if(znak>'Z')znak -= 26;
        j++;

        if(j>=delkaK)j=0;

        zasifrovanost = zasifrovanost+znak;
    }

    return zasifrovanost;
}

string rozsifruj(string zprava, string klic){
    string desifrovanost = "";
    int delkaZ, delkaK;

    delkaZ = zprava.length();
    delkaK = klic.length();

    int j = 0;
    for(int i=0; i<delkaZ; i++){
        char znak = zprava[i];
        znak = znak - klic[j]+64;
        if(znak<'A')znak += 26;
        j++;

        if(j>=delkaK)j=0;

        desifrovanost = desifrovanost+znak;
    }

    return desifrovanost;
}

int main()
{
    string slovo, klic, sifra, nesifra;

    cout << "Zadejte slovo: ";
    cin >> slovo;

    cout << endl << "Zadejte klic: ";
    cin >> klic;
    cout << endl;

    sifra = zasifruj(slovo, klic);
    nesifra = rozsifruj(sifra, klic);

    cout << sifra << endl;
    cout << nesifra << endl;


    return 0;
}
