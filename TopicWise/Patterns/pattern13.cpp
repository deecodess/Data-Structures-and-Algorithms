/* Print pattern 
****1
***23
**456
*78910
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
        for(int j=n-i+1;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}