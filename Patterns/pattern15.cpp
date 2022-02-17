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
    int f=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<f;j++){
            cout<<" ";
        }
        f--;
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}