//33 44 11 22
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
int main(){
     int n, a;
    cin >> n >> a;
    int mina(a), maxa(a), mini(0), maxi(0); //mina=33,maxa=33,mini=0,maxi=0
    for (int i = 1; i < n; i++)
    {
        cin >> a; //a=44
        if (a > maxa) //44>33
        {
            maxa = a; //maxa=44
            maxi = i; //maxi=1
        }
        if (a <= mina)
        {
            mina = a; //mina=11
            mini = i; //mini=2
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}