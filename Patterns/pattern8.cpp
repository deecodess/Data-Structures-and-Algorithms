/* Print pattern 
1
23
345
4567
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a digit: "; 
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
            
        }
        cout<<endl;
        
    }
    return 0;
}