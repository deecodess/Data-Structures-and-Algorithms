/* Get Maximum Occuring Character in a string */
#include <iostream>

using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int temp[26]={0};
        
        for(int i=0;i<str.length();i++){
            int deepu;
            if(str[i]>='a'&& str[i]<='z'){
                deepu=str[i]-'a';
            }
            if (str[i]>='A'&& str[i]<='Z'){
                deepu=str[i]-'A';
            }
            temp[deepu]++;
        }
        
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<temp[i]){
                ans=i;
                maxi=temp[i];
            }
        }
        char ch = ans + 'a';

            
        
        return ch;
    }

};

int main(){
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    Solution obj;
    cout<<"Maximum Occuring Character in a string is: "<<obj.getMaxOccuringChar(name)<<endl;
}