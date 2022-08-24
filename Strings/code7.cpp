/* Remove all occurances of a substring */
#include <iostream>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
int main(){
    string s,part;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<<"Enter the substring to be removed: "<<endl;
    cin>>part;
    Solution obj;
    cout<<"String after removing all occurances of substring: "<<obj.removeOccurrences(s,part)<<endl;
}