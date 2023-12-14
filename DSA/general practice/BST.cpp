#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* insertbst(node *root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertbst(root->left,val);
    }
    else{
        root->right=insertbst(root->right,val);
    }
}
void inorder(node *root){
    if(root==NULL){
        cout<<endl;
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node *searchinbst(node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data > key){
        return searchinbst(root->left,key);
    }
    return searchinbst(root->right,key);
}
node * deleteinbst(node* root,int key){
    if(key<root->data){
        root->left=deleteinbst(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteinbst(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
             node* temp=root->left;

        }
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deleteinbst(root ->right,temp->data);
    }
    return root;
}
node* inordersucc(node *root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node* constructbst(int preorder[],int *preorderidx, int key,int min,int max,int n){
    if(*preorderidx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max)
        root=new node(key);
        *preorderidx= *preorderidx+1;
        if(*preorderidx<n){
            root->left=constructbst(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n){
            root->right=constructbst(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
        return root;    
}
bool isbst(node* root,node* min,node* max){
    if(root==NULL){
        return true;
    }
    if(min !=NULL && root->data <=min->data){
        return false;
    }
    if(max!=NULL && root->data >=max->data){
        return false;
    }
    bool leftvalid=isbst(root->left,min,root);
    bool rightvalid=isbst(root->right,root,max);
    return leftvalid and rightvalid;
}
node *sortedarraytobst(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    node* root=new node(arr[mid]);
    root->left=sortedarraytobst(arr,start,mid-1);
    root->right=sortedarraytobst(arr,mid+1,end);
    return root;
}
int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}
vector<node*> constructtrees(int start,int end){
vector<node*> trees;
if(start>end){
    trees.push_back(NULL);
}
for(int i=start;i<end;i++){
    vector<node*> leftsubtrees=constructtrees(start,i-1);
    vector<node*> rightsubtrees=constructtrees(i+1,end);


for(int j=0;j<leftsubtrees.size();j++){
    node* left=leftsubtrees[j];
    for(int k=0;k<rightsubtrees.size();i++){
        node* right=rightsubtrees[k];
        node* nod=new node(i);
        nod->left=left;
        nod->right=right;
        trees.push_back(nod);
    }
}
}
return trees;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
bool isidentical(node* root1,node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
else{
    bool cond1=root1->data==root2->data;
    bool cond2=isidentical(root1->left,root2->left);
    bool cond3=isidentical(root1->right,root2->right);
    if(cond1 && cond2 && cond3){
        return true;
    }
    return false;
}
}

int main(){
    vector<node*> totaltrees=constructtrees(1,3);
    for(int i=0;i<totaltrees.size();i++){
        cout<<(i+1)<<" : ";
        preorder(totaltrees[i]);
        cout<<endl;
    }
    return 0;
}