#include <iostream>
#include <stack>
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

node* insertbst(node* &root,int val){

    if(root==NULL){
        root = new node(val);
    }

    if(root->data<val){
        root->right=insertbst(root->right,val);
    }

    if(root->data>val){
        root->left=insertbst(root->left,val);
    }

    return root;
}

/*node* preorderbstbuild(int arr[],node* root,int arrsize){

    int val;
    static int i;
    for( i=0;i<arrsize;i++){
        val=arr[i];
    }

    if(root==NULL){
        root = new node(val);
    }

    if(root->data<val){
        root->right=preorderbstbuild(arr[i+1],root->right,arrsize);
    }

    if(root->data>val){
        root->left=preorderbstbuild(arr[i+1],root->left,arrsize);
    }

    return root;
}*/

void inorder(node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* search(node* root,int key){

    if(root==NULL){
        return NULL;
    
    }

    if(root->data==key){
        return root;
    }

    if(root->data>key){
        return search(root->left,key);
    }
    
    return search(root->right,key);
    

}

node* inordersuc(node* root){
    node* cur=root;
    while(cur!=NULL && cur->left!=NULL){
        cur=cur->left;
    }
    return cur;
}

node* deletebstnode(node* root , int key){

    if(key<root->data){
        root->left=deletebstnode(root->left,key);
    }

    else if(key>root->data){
        root->right=deletebstnode(root->right,key);
    }

    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }

        else{
            
            node* temp=inordersuc(root->right);
            root->data=temp->data;
            root->right=deletebstnode(root->right,temp->data);
            return root;
        }
    }
    return root;
}

bool checkbst(node* root,node* min,node* max){

    if(root==NULL){
        return true;
    }

    if(max!=NULL  && root->data>max->data){
        return false;
    }

    if(min!=NULL && root->data<min->data){
        return false;
    }

    

    bool left =checkbst(root->left,min,root);
    bool right =checkbst(root->right,root,max);

    return left && right;
}

node* sortarrtobst(int arr[],int start,int end){

    if(start>end){
        return NULL;
    }

    int mid=(start+end)/2;
    node* root=new node(arr[mid]);

    root->left=sortarrtobst(arr,start,mid-1);
    root->right=sortarrtobst(arr,mid+1,end);

    return root;
}

bool checksamebst(node* root1,node * root2){

    bool check=true;
    if(root1==NULL && root2 == NULL){
        
        return true;
    }

    else if(root1!=NULL && root2!= NULL){

        if(root1->data!=root2->data){
            check= false;
        }

        bool left=checksamebst(root1->left,root2->left);
        bool right=checksamebst(root1->right,root2->right);

        return check && left && right; 

    }

    else {
        return false;
    }
}

void zigzag(node* root){

    if(root==NULL){
        return;
    }

    bool lefttoright=true;

    stack <node*> st1;
    stack <node*> st2;

    st1.push(root);
    while(!st1.empty()){
    
    
    node* temp=st.top();
    st.pop();

    if(temp){
        cout<<temp->data;
    

    if(lefttoright){
        if(temp->left!=NULL){
            st2.push(temp->left);
        }
        if(temp->right!=NULL){
            st2.push(temp->right);    
        }
    }
    else{
        if(temp->right!=NULL){
            st2.push(temp->right);    
        }
        if(temp->left!=NULL){
            st2.push(temp->left);
        }
    }

    }
    if(st1.empty()){
    lefttoright=!lefttoright;
    swap(st1,st2);
    }
    }

}

int main(){

   /* node* root=NULL;
    insertbst(root,5);
    insertbst(root,1);
    insertbst(root,3);
    insertbst(root,4);
    insertbst(root,2);
    insertbst(root,7);

    node* max=NULL;
    node* min=NULL;*/


   

    //node* del=deletebstnode(root,5);
    //inorder(del);

    /*if(search(root,7)==NULL){
        cout<<"num not found";
    }
    else{
        cout<<"numm found";
    }*/

    //cout<<checkbst(root,min,max);

    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3,5};
    int s=0;
    int e=4;

    node* Root1=sortarrtobst(arr1,s,e);
    node* Root2=sortarrtobst(arr2,s,e);

    cout<<checksamebst(Root1,Root2);
    //preorder(Root);
}