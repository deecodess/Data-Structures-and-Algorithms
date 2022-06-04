/*Tina and Rahul have toy each. They are entering into an amusement park but it is not allowed to take the toys inside, so they have to keep it in the boxes provided by the park management. They want to keep the toys together in one box. There are N boxes in total, at this moment there are ti toys present in ith box and the maximum capacity of the box is denoted by ci. Rahul and Tina want to know in how many boxes can they keep their toys such that both the toys are in the same box.*/
#include <iostream>
using namespace std;

int main()
{
  //write your code here
  int t,n,m,k=0;
  cin>>t;
  while(t--){
    cin>>n;
    cin>>m;
    if(n<=m-2){
      k++;
    }
  }
  cout<<k;
  return 0;
}