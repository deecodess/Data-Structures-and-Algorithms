/* Print Pascal's Triangle */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a digit: "; 
    cin>>n;
    int cute=1;
    for(int i=0;i<n;i++){
        for(int space = 1; space <= n-i; space++)
            cout <<"  ";
        for(int j=0;j<=i;j++){
            if(j==0||i==0){
                cute=1;
            }
            else{
                cute=cute*(i-j+1)/j;
            }
            cout<<cute<<"   ";
        }
        cout<<endl;
    }
    return 0;
}