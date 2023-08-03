#include <iostream>
using namespace std;
int main(){
    int w,k,n;
    cin>>k>>n>>w;
    int i=1,p(0);
    while(w--){
        p+=i*k;
        i++;
    }
    if(p>n) cout<<p-n<<endl;
    else cout<<0<<endl;
}