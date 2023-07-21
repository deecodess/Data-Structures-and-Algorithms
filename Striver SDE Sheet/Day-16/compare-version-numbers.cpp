class Solution {
public:
    int compareVersion(string version1, string version2) {
             int i=0, j=0;
        int vs1= version1.size(), vs2=version2.size();
        while (true){
            int v1=0, v2=0;
            while (i<vs1 && version1[i]!='.'){
                v1*=10;
                v1+= (version1[i]-'0');
                i++;
            }
            while (j<vs2 && version2[j]!='.'){
                v2*=10;
                v2+= (version2[j]-'0');
                j++;
            }
            if (v1<v2)return -1;
            if (v1>v2)return 1;
            if (i>=vs1 && j>=vs2)break; //return 0;
            i++; j++;
        }
        return 0;
    }
};