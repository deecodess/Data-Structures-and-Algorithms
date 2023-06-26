/* Diameter of a Binary Tree*/
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
pair <int,int> diameterfast(Node* root){
    if(root==NULL){
        pair <int,int> p=make_pair(0,0);
        return p;
    }
    pair <int,int> left=diameterfast(root->left);
    pair <int,int> right=diameterfast(root->right);
    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;

    pair <int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;

    return ans;
}
int diameter(Node* root){
    if(root==NULL)
        return 0;
    int left=diameter(root->left);
    int right=diameter(root->right);
    int op1=left;
    int op2=right;
    int op3=height(root->left)+height(root->right)+1;
    return max(op1,max(op2,op3));
}
int height(Node* root){
    if(root==NULL)
        return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
int main(){
    Node* root=NULL;
    root=buildTree(root);
    cout<<diameterfast(root).first<<endl;
    return 0;
}