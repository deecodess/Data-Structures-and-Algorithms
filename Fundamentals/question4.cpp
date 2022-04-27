/*Have you heard of Perfect numbers? If not let me tell you what is it, Perfect Numbers are integers that are equal to the sum of all its divisors except that number itself.Now, given an integer N,write a program to print true if it is a perfect number or false if it is not a perfect number.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,n,m=0;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=1;i<n;i++){
      if(n%i==0){
        m=m+i;
      }
    }
    if(m==n){
      cout<<"true"<<endl;
    }
    if(m!=n){
      cout<<"false"<<endl;
    }
  }
  return 0;
}