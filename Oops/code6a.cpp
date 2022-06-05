/*Exception Specification */
#include <iostream>
using namespace std;
class a{};
class b{};
class unknown_word: public a{};
class bad_grammer: public b{};

void translate(int a)throw(unknown_word,bad_grammer){
    if(a==0){
        throw unknown_word();
    }
    if(a==1){
        throw bad_grammer();
    }
    else throw 10;
}
int main(){
    try{translate(22);}
    catch(unknown_word){cout<<"Unknown Word";}
    catch(bad_grammer){cout<<"Bad Grammer";}
    catch(...){cout<<"Default Catch";}
    return 0;
    
}