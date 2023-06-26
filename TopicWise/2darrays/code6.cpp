#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int t,k;
    cin>>t;
    while(t--){
        cin>>k;
        char s[1000];
        for(int i=0;i<k;i++){
            cin>>s[i];
        }
    
        char n[] = {'T','i','m','u','r'};



        if(k!=5){
        cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i!='\0';i++){
                for(int j=0;j!='\0';j++){
                    if(s[i]!=n[j]){
                        cout<<"NO"<<endl;
                    }
                }
            }
            cout<<"YES"<<endl;
        }
    }
}