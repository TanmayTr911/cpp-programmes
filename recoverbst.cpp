#include <iostream>
#include <stack>
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

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
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

void inorder(node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void inorderstore(node* root,vector <int> &v){


    
    if(root==NULL){
        return ;
    }
    inorderstore(root->left,v);
    v.push_back(root->data);
    inorderstore(root->right,v);

    
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->right=new node(4);
    root->right->right->right=new node(5);
    root->right->right->left=new node(6);
    root->right->right->left->left=new node(7);
    root->right->right->left->left->left=new node(8);

    vector <int> v;

    inorderstore(root,v);

    int arr[v.size()];

    for(int i=0;i<v.size();i++){
        arr[i]=v[i];
    }

    int n=v.size();
    bubbleSort(arr,n);

    int start=0;
    int end=v.size()-1;

    node* root1=sortarrtobst(arr,start,end);

    inorder(root1);

}