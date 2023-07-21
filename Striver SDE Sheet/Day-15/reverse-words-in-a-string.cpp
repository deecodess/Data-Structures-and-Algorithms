class Solution {
public:
    string reverseWords(string s) {
        stack <string> st;
        string temp=" ";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' and temp!=" "){
                            st.push(temp);
                            temp=" ";
            }
            else if(s[i]!=' '){
                    temp+=s[i];
            }
        }
            if(temp!=" "){
                    st.push(temp);
            }
        
        
        string ans(st.top(),1,st.top().size());
        st.pop();
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        return ans;

    }
};