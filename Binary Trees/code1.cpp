/* Basic Structure*/
#include <iostream>
#include <queue>

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
// Level Order Traversal
void levelOrderTraversal(Node* root){
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);            
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
}
//Inorder Traversal  LNR
void inorder(Node* root){
    // Base Case
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// Preorder Traversal NLR
void preorder(Node* root){
    // Base Case
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
// Postorder Traversal LRN
void postorder(Node* root){
    // Base Case
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildFromLevelOrder(Node* &root){
    queue <Node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter left node for: "<<root->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for: "<<root->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }

    }
}
int main(){
    Node *root = NULL;
    //buildFromLevelOrder(root);
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Level Order Traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder Traversal: "<<endl;
    inorder(root);
    cout<<"Preorder Traversal: "<<endl;
    preorder(root);
    cout<<"Postorder Traversal: "<<endl;
    postorder(root);

    return 0;
}