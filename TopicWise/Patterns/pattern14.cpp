/* Print pattern 
   *
  ***
 *****
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
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int p=0;p<i-1;p++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}