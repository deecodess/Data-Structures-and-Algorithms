/* Reading characters from a file*/
#include <iostream>
#include<fstream>
using namespace std;
int main(){
    char c;
    ifstream fin("Mysecrets.txt");
    if(!fin){cout<<"File doesnt exist!"; return 0;}
    while(!fin.eof()){ //while end of the file
        fin.get(c); //read characters from the file
        cout<<c; //print them on screen
    }
    fin.close();
}