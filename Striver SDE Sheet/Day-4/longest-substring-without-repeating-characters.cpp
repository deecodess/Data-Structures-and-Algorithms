class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char>Set;
        int maxi=0;
        int start=0;
        int end=0;

        while(start<s.size()){
            auto it=Set.find(s[start]);
            if(it==Set.end()){
                if(start-end+1>maxi)maxi=start-end+1;
                Set.insert(s[start]);
                start++;
            }
            else{
                Set.erase(s[end]);
                end++;
            }
        }
        return maxi;

    }
};class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <char>Set;
        int maxi=0;
        int start=0;
        int end=0;

        while(start<s.size()){
            auto it=Set.find(s[start]);
            if(it==Set.end()){
                if(start-end+1>maxi)maxi=start-end+1;
                Set.insert(s[start]);
                start++;
            }
            else{
                Set.erase(s[end]);
                end++;
            }
        }
        return maxi;

    }
};