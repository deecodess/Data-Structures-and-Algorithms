#include <iostream>
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
Node* InsertintoBST(Node* root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d<=root->data){
        root->left=InsertintoBST(root->left,d);
    }
    else{
        root->right=InsertintoBST(root->right,d);
    }
    return root;
}
void takeInput(Node* &root){
    int d;
    cin>>d;
    while(d!=-1){
        root=InsertintoBST(root,d);
        cin>>d;
    }
}
int main(){
    Node* root=NULL;
    takeInput(root);
    return 0;
}