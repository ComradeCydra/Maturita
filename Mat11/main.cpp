#include <iostream>
#include <fstream>

using namespace std;

struct TPrvek{
    int num = 0;
    string Word;
    TPrvek *next;
};

TPrvek *beginning = NULL;

void CrunchWords(string LoadWord){
    TPrvek *help = beginning;

    while(help != NULL and help->Word != LoadWord){
        help = help->next;
    }

    if(help != NULL){
        help->num = help->num+1;
    } else {
        help = new TPrvek;
        help->Word = LoadWord;
        help->num = 1;
        help->next = beginning;
        beginning = help;
    }
}

void LoadResult(){
    TPrvek *help = beginning;

    while(help != NULL){
        cout << help->Word << " " << help->num << endl;
        help = help->next;
    }
}

int main()
{
    ifstream soubor;
    string NewWord;

    soubor.open("zprava.txt");

    while(soubor >> NewWord){
        cout << "Nacteno: " << NewWord << endl;
        CrunchWords(NewWord);
    }

    cout << endl << endl;

    LoadResult();
    soubor.close();
    return 0;
}
