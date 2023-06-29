Node *flatten(Node *root)
{
   if(root->next==NULL) return root;
   Node *temp=flatten(root->next);
   Node* chhotu=root;
   while(1){
       while(chhotu->bottom!=NULL && chhotu->bottom->data<=temp->data){
           chhotu=chhotu->bottom;
       }
       if(chhotu->bottom==NULL){
       chhotu->bottom=temp;
       break;}
       else{
           Node* dum=chhotu->bottom;
           chhotu->bottom=temp;
           temp=dum;
       }
       
   }
   return root;
}