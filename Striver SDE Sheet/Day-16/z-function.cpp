class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length()) return -1;
        else if(needle.length()==haystack.length()){
            if(needle!=haystack) return -1;
            else return 0;
        }
        else{
            int index;
            int i=0;
            int j=0;
            int k=0;
            int count=0;
            while(i<=j){
                if(needle[k]==haystack[j]){
                    j++;
                    k++;
                    count++;
                }
                else{
                    i++;
                    j++;
                    k++;
                }
                if(count==needle.size()){
                    //cout<<"aaa"<<endl
                    return i;
                }
            }
            return -1;
           
        }
    }
};