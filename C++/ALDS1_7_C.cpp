#include<iostream>
using namespace std;
int nil=-1;

struct node{
    int p,l,r;
};
struct node t[10000];
int n;

void preparse(int u){
    if(u==nil)return;
    cout<<" "<<u;
    preparse(t[u].l);
    preparse(t[u].r);
}

void inparse(int u){
    if(u==nil)return;
    inparse(t[u].l);
    cout<<" "<<u;
    inparse(t[u].r);
}

void postparse(int u){
    if(u==nil)return;
    postparse(t[u].l);
    postparse(t[u].r);
    cout<<" "<<u;
}

int main(){
    int v,l,r,root;

    cin>>n;
    for(int i=0;i<n;i++){
        t[i].p=nil;
    }
    for(int i=0;i<n;i++){
        cin>>v>>l>>r;
        t[v].l=l;
        t[v].r=r;
        if(l!=nil)t[l].p=v;
        if(r!=nil)t[r].p=v;
    }
    for(int i=0;i<n;i++){
        if(t[i].p ==nil){
            root=i;
        }
    }
    cout<<"Preorder"<<endl;
    preparse(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inparse(root);
    cout<<endl;
    cout<<"Postorder"<<endl;
    postparse(root);
    cout<<endl;

    return 0;
}
