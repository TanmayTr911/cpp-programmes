#include <iostream>
#include <vector>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* lca(node* root,int n1,int n2){

    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }

    node* left=lca(root->left,n1,n2);
    node* right=lca(root->right,n1,n2);

    if(left!=NULL && right!=NULL){
        return root;
    }

    if(left==NULL && right==NULL){
        return NULL;
    }

    if(left!=NULL && right==NULL){
        return left;
    }
    else{
        return right;
    }
}



int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->right=new node(4);
    root->right->left=new node(5);

   node* Lca=lca(root,4,5);
   cout<<Lca->data;
}
