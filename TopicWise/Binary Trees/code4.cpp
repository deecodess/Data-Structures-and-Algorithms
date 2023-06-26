/*Balanced Binary Tree*/
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* buildTree(Node* root){
    cout<<"Enter data: "<<endl;
    int d;
    cin>>d;
    root=new Node(d);
    if(d==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<d<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<d<<endl;
    root->right=buildTree(root->right);
    return root;
}
int height(Node* root){
    if(root==NULL)
        return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
pair <bool,int> isBalanced(Node* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    pair<int,int> left=isBalanced(root->left);
    pair<int,int> right=isBalanced(root->right);

    bool leftAns=left.first;
    bool rightAns=right.first;

    bool diff=abs(left.second-right.second)<=1;

    pair <bool,int> ans;
    ans.second=max(left.second,right.second)+1;
    if(leftAns && rightAns && diff){
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    return ans;
}
int main(){
    Node* root=NULL;
    root=buildTree(root);
    pair <bool,int> ans=isBalanced(root);
    if(ans.first){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}