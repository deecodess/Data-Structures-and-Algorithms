/* Print pattern 
1
22
333
4444
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a digit: "; 
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        cout<<endl;
        count++;
    }
    return 0;
}