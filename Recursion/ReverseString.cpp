#include <iostream>
#include <string.h>
using namespace std;
void solution(string& s, int i, int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    
    solution(s,i,j);
}
int main(){
    string s;
    cin>>s;
    solution(s,0,s.length()-1);
    cout<<s;
    return 0;
}