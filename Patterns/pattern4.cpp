/* Print pattern 
123
456
789
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
        for(int j=1;j<=n;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}