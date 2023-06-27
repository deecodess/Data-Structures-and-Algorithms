void solve(Node* &node, vector<int>&ans,int level){
    if(node==NULL) return;
    if(ans.size()==level) ans.push_back(node->data);
    solve(node->left,ans,level+1);
    solve(node->right,ans,level+1);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   solve(root, ans, 0);
   return ans;
}