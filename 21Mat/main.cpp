#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string word;
    ifstream Inputfile;
    ofstream Outputfile;

    Inputfile.open("file.txt");
    Outputfile.open("Output.txt");

    while(Inputfile >> word){
        if(word.length()==1){
            Outputfile << word << "&nbsp;";
        } else {
            Outputfile << word << " ";
        }
    }/

    Outputfile.close();
    Inputfile.close();

    return 0;
}
