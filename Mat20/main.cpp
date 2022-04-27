#include <iostream>
#include <fstream>

using namespace std;

void copyfile(string file, string filename){

    /** CopyFile(filename.c_str(), (file+filename).c_str(), true);
    return;

    Metoda s windows.h **/

    /** ifstream fileOrig;
    ofstream newfile;
    char bajt;
    char *polebajt;

    polebajt = new char[1000];

    fileOrig.open(filename.c_str(), ios::binary|ios::in);
    newfile.open((file+filename).c_str(), ios::binary|ios::out);

    do{
        fileOrig.read(polebajt, 1000);
        newfile.write(polebajt, fileOrig.gcount());
    }while(fileOrig.gcount()!=0);

    fileOrig.close();
    newfile.close();

    delete[] polebajt;

    Rychlejší metoda s dynamickým polem charù**/

    ifstream fileOrig;
    ofstream newfile;
    char bajt;

    fileOrig.open(filename.c_str(), ios::binary|ios::in);
    newfile.open((file+filename).c_str(), ios::binary|ios::out);

    while(fileOrig.read(&bajt, 1)){
        newfile.write(&bajt, 1);
    }

    fileOrig.close();
    newfile.close();
}

int main()
{
    cout << "Welcome to the installer." << endl << endl;

    string directory, filename;
    ifstream file;

    cout << "Input install directory: ";
    cin >> directory;
    cout << endl;

    file.open("program.txt");
    while(getline(file, filename)){
        cout << "Copying file..." << filename << endl;
        copyfile(directory, filename);
        cout << "File copied successfully." << endl << endl;
    }

    file.close();

    cout << "Installation successful." << endl;
    return 0;
}
