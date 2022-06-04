/* Function Templates */
/*
#include <iostream>
using namespace std;
template <class dee>
dee addit(dee a, dee b){
    return a+b;
}
int main(){
    int s;
    s=addit('d','h');
    cout<<s<<endl;
    return 0;
}
*/
/* Multiple Function Templates */

#include <iostream>
using namespace std;
template<class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return(a<b?a:b);
}
int main(){
    double x=smaller(69,76);
    cout<<x;
    return 0;
}