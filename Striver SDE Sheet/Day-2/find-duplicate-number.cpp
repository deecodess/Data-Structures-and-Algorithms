class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int sl=arr[0],fs=arr[0];
        do{
            sl=arr[sl];
            fs=arr[arr[fs]];
        } while(sl!=fs);
        fs=arr[0];
        while(sl!=fs){
            sl=arr[sl];
            fs=arr[fs];
        }
        return sl;
    }
};