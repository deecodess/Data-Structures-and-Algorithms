#include<iostream>
using namespace std;
int main(){
    int t,sum=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="Icosahedron")sum+=20;
        if(s=="Cube") sum+=6;
        if(s=="Tetrahedron") sum+=4;
        if(s=="Dodecahedron") sum+=12;
        if(s=="Octahedron")sum+=8;
    }
    cout<<sum<<endl;
    return 0;
}