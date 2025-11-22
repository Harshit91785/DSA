#include<iostream>
using namespace std;
int count=0;
class treenode{
    public:
    int val;
    treenode* left;
    treenode *right ;
    treenode(int val)
    {
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
void displaytree(treenode *root){
    if(root== NULL) return ;
    cout<<root->val<<"  ";
    displaytree(root->left);
    displaytree(root->right);
}
int sum(treenode* root){
    if(root==NULL) return 0;
    int a=root->val + sum(root->left) +sum(root->right);
    return a;
}
int size(treenode *root){
    if(root==NULL) return 0;
    return 1+ size(root->left)+size(root->right);
}
int sizes(treenode *root){
    if(root==NULL) return 0;
    count++;
    sizes(root->left);
    sizes(root->right);
    return count;
}
int maxintree(treenode* root){
    if(root==NULL ) return 0;
    int lmax=maxintree(root->left);
    int rmax=maxintree(root->right);
    return max(root->val,max(lmax,rmax));
}
int main()
{
    
    treenode* a= new treenode(1);
    treenode* b= new treenode(2);
    treenode* c= new treenode(3);
    treenode* d= new treenode(4);
    treenode* e= new treenode(5);
    treenode* f= new treenode(6);
    treenode* g= new treenode(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displaytree(a);
    cout<<sum(a);
    cout<<sizes(a)<<"  ";
    cout<<size(a)<<"  ";
}
