#include <iostream>
#include <queue>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int search(int inorder[], int start, int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
void printlevelorder(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* nod=q.front();
        q.pop();
        if(nod!=NULL){
            cout<<nod->data<<" ";
            if(nod->left){
             q.push(nod->left);
            }
            if(nod->right){
                q.push(nod->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int sumatk(node* root,int k){
    if(root==NULL){
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node !=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
node* buildtree(int preorder[], int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
  int curr=preorder[idx];
  idx++;
  node* nod=new node(curr);
  if(start==end){
    return nod;
  }
 int pos=search(inorder,start,end,curr);
 nod->left=buildtree(preorder, inorder,start,pos-1);
 nod->right=buildtree(preorder, inorder, pos+1, end);
}
int countnode(node* root){
    if(root==NULL){
        return 0;
    }
    return countnode(root->left)+countnode(root->right)+1;
}
int sumnode(node* root){
    if(root==NULL){
        return 0;
    }
    return sumnode(root->left)+sumnode(root->right)+root->data;
}
int calcheight(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcheight(root->left);
    int rheight=calcheight(root->right);
    return max(lheight,rheight)+1;
}
int calcdiameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcheight(root->left);
    int rheight=calcheight(root->right);
    int currdiameter=lheight+rheight+1;
    int ldiameter=calcdiameter(root->left);
    int rdiameter=calcdiameter(root->right);
    return max(currdiameter,max(ldiameter,rdiameter));
}
void sumreplace(node* root){
    if(root==NULL){
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left != NULL){
        root->data+=root->left->data;
    }
    if(root->right !=NULL){
        root->data+=root->right->data;
    }
}
bool isbalanced(node* root, int* height){
    if(root==NULL){
        return true;
    }
    int lh=0;
    int rh=0;
    if(isbalanced(root->left,&lh)==false){
        return false;
    }
    if(isbalanced(root->right,&rh)==false){
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
void rightview(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            node* curr=q.front();
            q.pop();
            if(i==n-1){
                cout<<curr->data<<" ";
            }
            if(curr->left !=NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
}
int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<sumatk(root,2)<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    printlevelorder(root);
    cout<<endl;
    int x=calcheight(root);
    cout<<isbalanced(root,&x);
    cout<<endl;
    rightview(root);
    cout<<endl;
    return 0;
}