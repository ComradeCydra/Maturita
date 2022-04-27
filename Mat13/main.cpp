#include <iostream>

using namespace std;

class SortedField {
    private:
        int *ElementField;
        int ElementNum;
        int maxAmount;

    public:
        SortedField(int max);
        int insertIntoField(int number);
        void printField();
        ~SortedField();
};

SortedField::SortedField(int max){
    ElementField = new int[max];
    ElementNum = 0;
    maxAmount = max;
    cout << "Pole bylo vytvoreno." << endl;
}

SortedField::~SortedField(){
    delete[] ElementField;
    cout << "Pole bylo vymazano." << endl;
}

int SortedField::insertIntoField(int num){
    if(ElementNum<maxAmount){
        ElementField[ElementNum] = num;
        ElementNum++;

       int i = ElementNum-1;
       while(i>0 and ElementField[i] < ElementField[i-1]){
        int help = ElementField[i];
        ElementField[i] = ElementField[i-1];
        ElementField[i-1] = help;
        i--;
    }
        return 1;
    } else {
        return 0;
    }
}

void SortedField::printField(){
    for(int i=0; i<ElementNum; i++){
        cout << ElementField[i] << " ";
    }

    cout << endl << endl;
}

int main()
{
    SortedField a(10);
    a.insertIntoField(3);
    a.insertIntoField(25);
    a.insertIntoField(2);
    a.insertIntoField(63);
    a.insertIntoField(11);
    a.insertIntoField(3);
    a.insertIntoField(35);

    a.printField();

    return 0;
}
