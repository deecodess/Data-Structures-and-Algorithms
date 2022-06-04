/*copying contents from one file to another */
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char ch;
    ifstream fin("MySecrets.txt");
    ofstream fout("Copyingmysecrets.txt");
    while(!fin.eof()){
        fin.get(ch);
        fout<<ch;
    }
    fin.close();
    fout.close();
}