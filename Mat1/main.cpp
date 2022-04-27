#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100], b[100];
    int poleA[100], poleB[100], poleC[100];
    cout << "Zadejte 1. cislo: ";
    cin >> a;
    cout << endl << "Zadejte 2. cislo: ";
    cin >> b;

    int Alength = strlen(a);
    int Blength = strlen(b);
    int prenos = 0;

    for(int i=0; i<100; i++){
        poleA[i]=poleB[i]=poleC[i]=0;
    }

    for(int i=0; i<Alength; i++){
        poleA[i]=a[Alength-i-1]-48;
    }

    for(int i=0; i<Blength; i++){
        poleB[i]=b[Blength-i-1]-48;
    }

    for(int i=0; i<100; i++){
        cout << poleA[i];
    }
    cout << endl;

    for(int i=0; i<100; i++){
        cout << poleB[i];
    }
    cout << endl;

    for(int i=0; i<100; i++){
        poleC[i]=poleA[i]+poleB[i]+prenos;
        if(poleC[i]>9){
            poleC[i]=poleC[i]-10;
            prenos = 1;
        } else {
            prenos = 0;
        }
    }

    for(int i=99; i>0; i--){
        cout << poleC[i];
    }

    return 0;
}
