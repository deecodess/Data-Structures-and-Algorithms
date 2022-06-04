/* reading and writing in a file */
#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
int main(){
    string sen;
    ofstream fout ("MySecrets.txt");
    fout<<"Hello 123";
    fout.close();
    ifstream fin ("MySecrets.txt");
    getline(fin,sen);
    cout<<sen;
    fin.close();
}