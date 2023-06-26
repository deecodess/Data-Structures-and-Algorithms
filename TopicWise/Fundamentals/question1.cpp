/* PrepBuddy gave you a number X and asks you to reverse that number and print it.*/
#include <iostream>
using namespace std;

int main()
{
  //write your code here
  int n;
  int reverse=0;
  cin>>n;
  while(n!=0){
    int m=n%10;
    
    reverse=(reverse*10)+m;
    n=n/10;
  }
  cout<<reverse;
  
  return 0;
}