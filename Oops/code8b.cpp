/* writin text into file */
#include<iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file("SimpleFile.txt");
    file<<"Writing to a file in cpp!!";
    file.close();
}