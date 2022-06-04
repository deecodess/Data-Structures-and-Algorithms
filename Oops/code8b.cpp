/* writin text into file */
#include<iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file("SimpleFile.txt");
    file<<"Writing to a file in cpp!!";
    file.close();
}

/* or writing to a file using ios::out flag */
/*
int main(){
    fstream file("Simplefile.txt“,ios::out);
    file << "Writing to a file in C++....";
    sfile.close();
}