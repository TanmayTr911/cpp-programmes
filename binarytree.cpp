#include <iostream>
#include <queue>
#include <climits>
using namespace std;

//BinaryTree build
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    
};

//PreOrder Traversal
void preorder(Node* root){
    
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

//inorder traversal
void inorder(Node* root){
    
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

//postorder traversal;
void postorder(Node* root){
    
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

//inorder mein search for building a tree using preorder/ postorder ans inorder
int search(int inorder[],int start ,int end,int curr){
    
    int pos;
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            pos=i;
            }
    }
    return pos;
}

//making tree using preorder and inorder arrays
Node* prebuild(int preorder[],int inorder[],int start,int end){
    static int idx=0;

    if(start>end){
        return NULL;
    }

    int curr=preorder[idx];
    idx++;

    Node* node= new Node(curr);

    if(start==end){
        return node;
    }

    int pos=search(inorder,start,end,curr);

    node->left=prebuild(preorder,inorder,start,pos-1);
    node->right=prebuild(preorder,inorder,pos+1,end);

    return node; 

}


//building a tree using postorder inorder arrays
Node* postbuild(int preorder[],int inorder[],int start,int end){
    static int idx=6;

    if(start>end){
        return NULL;
    }

    int curr=preorder[idx];
    idx--;

    Node* node= new Node(curr);

    if(start==end){
        return node;
    }

    int pos=search(inorder,start,end,curr);
    node->right=postbuild(preorder,inorder,pos+1,end);
    node->left=postbuild(preorder,inorder,start,pos-1);
    

    return node; 

}

//levelorder traversal using queues 
void levelorder(Node* root){


    
    queue <Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node=q.front();
        q.pop();

        if(node!=NULL){
            cout<<node->data<<" ";
            
            
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
        else if(!q.empty()) {
            q.push(NULL);
        }

        }
        
}

//height of bt
int height(Node* root){

    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) + 1;
}

/*int height(Node* root) {
        // Write your code here.
        static int count=0;
        cout<<count<<endl;
        if(root==nullptr){
            return 0;
        }
        
        if(count==0){
            int height1 = max(height(root->left),height(root->right));
            count++;
            return height1;
            
        }
        else{        
            int height1 = max(height(root->left),height(root->right))+1;
            return height1;
        }
        
        
    }

*/
//sum of left and right child and node into a node 
void sumreplace(Node* root) {

    if(root==NULL){
        return ;
    }

    sumreplace(root->left);
    sumreplace(root->right);

    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
} 

int diametre(Node* root ){

    if(root==NULL){
        return 0;
    }

    int currlen=height(root->left)+height(root->right)+1;
    int leftheight=diametre(root->left);
    int rightheight=diametre(root->right);

    return max(currlen,max(leftheight,rightheight));
}

bool balancetree(Node* root){
    if(root==NULL){
        return true;
    }

    if(!balancetree(root->left)){
        return false;
    }
    if(!balancetree(root->right)){
        return false;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
//unsuccesful attempt of right print
void rightpri(Node* root){

    if(root==NULL){
        return;

    }

    cout<<root->data<<" ";
    rightpri(root->right);

    if(root->right==NULL){
        rightpri(root->left);
    }
    Node* temp=root;
    if(height(root->left)>height(root->right)){
        for(int i=0;i<height(root->right)+1;i++){
            temp=temp->left;
        }
        rightpri(temp);
        
    }

}

void rightprint(Node* root){
    queue <Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node=q.front();
        q.pop();

        if(node!=NULL){
            if(q.front()==NULL){
                cout<<node->data<<" ";
            }
            
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
        else if(!q.empty()) {

            q.push(NULL);
        }

        }
        
}

void leftprint(Node* root){
    queue <Node*> q;

    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";

    while(!q.empty()){
        Node* node=q.front();
        q.pop();

        if(node!=NULL){
            
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
        else if(!q.empty()) {
            cout<<q.front()->data<<" ";
            q.push(NULL);
        }

        }
        
}

void flaten(Node* root){

    if(root==NULL||root->left==NULL && root->right==NULL){
        return ;
    }

    if(root->left!=NULL){
        flaten(root->left);
        

        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node* t=root->right;
        while(t->right!=NULL){
            t=t->right;
        }

        t->right=temp;
    }

    flaten(root->right);
}

int maxsumunit(Node* root,int &ans){

    if(root==NULL){
        return 0;
    }

    int left=maxsumunit(root->left,ans);
    int right=maxsumunit(root->right,ans);

    int funcreturn=max(max(left+root->data,right+root->data),root->data);

    int sum=max(funcreturn,left+right+root->data);

    ans=max(ans,sum);

    return funcreturn;

}

int maxsum(Node* root){

    int ans=INT_MIN;
    maxsumunit(root,ans);
    return ans;
}

bool checkbst(Node* root,Node* min,Node* max){

    if(root==NULL){
        return true;
    }

    if(max!=NULL && min!=NULL && root->data>min->data && root->data<max->data){
        return true;
    }

    else{
        bool left =checkbst(root->left,min,root);
        bool right =checkbst(root->right,root,max);
    }
    return left && right;
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->right=new Node(4);
    root->right->right->right=new Node(5);
    root->right->right->left=new Node(6);
    root->right->right->left->left=new Node(7);
    root->right->right->left->left->left=new Node(8);


    //Node* max=NULL;
    //Node* min = NULL;
    //cout<<checkbst(root,min,max);

    cout<<height(root);

    //preorder(root); 

    //int Preorder[]={1,2,4,5,3,6,7};
    //int Inorder[]={4,2,5,1,6,3,7};
    //int Postorder[]={4,5,2,6,7,3,1};

   
    //Node* pre=prebuild(Preorder,Inorder,0,6);
    //Node* post=postbuild(Postorder,Inorder,0,6);

    

    //sumreplace(pre);

    //levelorder(pre);

    //postorder(pre);

    //cout<<endl;

    //preorder(post);

    /*Node* root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(3);

    cout<<height(root)<<endl;*/

    /*if(balancetree(root)){
        cout<<"balanced";
    
    }
    else{
        cout<<"unbal";
    }*/

    //leftprint(root);
    //cout<<endl;
    //rightpri(root);

    //flaten(pre);
    //preorder(pre);


} 