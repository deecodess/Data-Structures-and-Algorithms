/* Print pattern 
   *
  **
 ***
****
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a digit: "; 
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=n-i+1;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}