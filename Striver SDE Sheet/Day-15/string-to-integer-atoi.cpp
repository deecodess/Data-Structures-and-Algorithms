class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()==1) return 0;
        int i=0;
        short sign=1;
        while(s[i]==' '&&i<s.length()){i++;}
        if(i>=s.length()) return 0;
        if(s[i]=='+'){
            sign=+1;
            i++;
        }
        else if(s[i]=='-'){
            sign=-1;
            i++;
        }
        long long num=0;
        while(s[i]>='0'&&s[i]<='9'){
            num=num*10+(s[i]-'0');
            if(num<=INT_MIN || num>=INT_MAX) break;
            i++;
        }
        num*=sign;
        if(num<=INT_MIN)num=INT_MIN;
        if(num>=INT_MAX)num=INT_MAX;
        return int(num);

    }
};