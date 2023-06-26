/* Print pattern 
1111
222
33
4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a digit: "; 
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}