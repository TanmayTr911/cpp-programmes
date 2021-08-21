#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int key){

        data=key;
        left=right=NULL;
    }
};

void getverorder(node* root,map<int,queue <int>> &mp,int hdis){

    if (root==NULL){
        return;
    }

    mp[hdis].push(root->data);

    getverorder(root->left,mp,hdis-1);

    getverorder(root->right,mp,hdis+1);
}

int main(){

    node *root=new node(10);
    root->left=new node(7);
    root->right=new node(4);
    root->left->left=new node(3);
    root->left->right=new node(11);
    root->right->left=new node(14);
    root->right->right=new node(6);


    map <int, queue <int>> mp;

    int hdis=0;

    getverorder(root,mp,hdis);

    map <int,queue <int>> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++){

        cout<<it->second.front();
        cout<<endl;
    }

}