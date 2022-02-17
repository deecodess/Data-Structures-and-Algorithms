#include <iostream>
using namespace std;

int main(){
    pair<int,string> p;
    // p=make_pair(2,"abc"); //Method 1 of making a pair
    p={2,"abc"}; //Method 2 of making a pair
    pair<int,string> &p1=p; // the latest declared value of p will be printed if & is used
    p1.first = 3;
    cout << p.first <<" "<< p.second<< endl;
    //How to maintain relation between two arrays
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;++i){
        cout<<p_array[i].first <<" "<< p_array[i]
    }
}