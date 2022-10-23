#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void buildtree(Node* root){
    int d;
    cin>>d;
    if(d==-1)
        return;
    root = new Node(d);
    buildtree(root->left);
    buildtree(root->right);
}
class Solution{
    public:
    int height(struct Node* node){
        if(node==NULL)
            return 0;
        int left=height(node-> left);
        int right=height(node-> right);
        int ans=max(left,right)+1;
        return ans;
    }
};
int main(){
        int n;
        cin>>n;
        Node* root = NULL;
            int x;
            cin>>x;
            Node* root = new Node(x);
        
        Solution ob;
        cout<<ob.height(root)<<endl;
    
    return 0;
}