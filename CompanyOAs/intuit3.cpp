int solve(vector<int>a,vector<int>b){
    vector<int>c;
    for(int i=0;i<a.size();i++){
        c.push_back(a[i]+b[i]);
    }
    int maxi=INT_MIN;
    for(int i=0;i<c.size();i++){
        if(c[i]>maxi){
            maxi=c[i];
        }
    }
    int ans=0;
    for(int i=0;i<c.size();i++){
        if(c[i]==maxi){
            ans++;
            
        }
    }
    return ans;

}