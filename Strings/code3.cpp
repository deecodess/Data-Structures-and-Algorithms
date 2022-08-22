/* Check if a string is a Palindrome */
#include <iostream>
using namespace std;

bool isPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s++]!=name[e--]){
            return false;
        }
    }
    return true;
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    int n=getLength(name);
    if(isPalindrome(name,n)){
        cout<<"Your name is a Palindrome"<<endl;
    }
    else{
        cout<<"Your name is not a Palindrome"<<endl;
    }
}