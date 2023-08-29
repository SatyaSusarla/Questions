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
node* LCA(node* root, int n1,int n2){
    if(root==NULL){
        return NULL;    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left= LCA(root->left,n1,n2);
    node* right=LCA(root->right,n1,n2);
    if(left != NULL && right != NULL){
        return root;
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left !=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
    
}
int finddist(node* root, int k, int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=finddist(root->left,k,dist+1);
    if(left != -1){
        return left;
    }
    return finddist(root->right,k,dist+1);
}

int distbtwnodes(node* root,int n1,int n2){
    node* lca=LCA(root,n1,n2);
    int d1=finddist(lca,n1,0);
    int d2=finddist(lca,n2,0);
    return d1+d2;
}
void flatten(node* root){
    if(root==NULL || (root->left ==NULL) && (root->right==NULL)){
        return;
    }
    if(root->left !=NULL){
        flatten(root->left);
        node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        node* t=root->right;
        while(t->right !=NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}
void printsubtrees(node* root,int k){
if(root==NULL || k<0){
    return ;
}
if(k==0){
    cout<<root->data<<" ";
    return;
}
printsubtrees(root->left,k-1);
printsubtrees(root->right,k-1);
}
int printnodesatk(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printsubtrees(root,k);
        return 0;
    }
    int dl=printnodesatk(root->left,target,k);
    if(dl != -1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printsubtrees(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr = printnodesatk(root->right,target,k);
    if(dr != -1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printsubtrees(root->left,k-dr-2);
        }
        return 1+dr;
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
  printsubtrees(root,2);
    return 0;
}