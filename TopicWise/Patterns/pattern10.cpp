/* Print pattern 
AAA
BBB
CCC
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a digit: "; 
    cin>>n;
    char alpha='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<alpha;
        }
        cout<<endl;
        alpha++;
    }
    return 0;
}