#include <iostream>
using namespace std;
#define MAX 10001

struct set{
    int parent;
    int key;
};

set A[MAX];

void unite(int x,int y){
    int n1=x;
    int n2=y;
   while(true){
       if(A[n1].parent==n1 && A[n2].parent==n2)break;
       else{
           n1=A[n1].parent;
           n2=A[n2].parent;
       }
   }
   A[n1].parent=n1;
   A[n2].parent=n1;
}

int findset(int x,int y){
    while(true){
        if(A[x].parent==x&&A[y].parent==y)break;
        else {
           x=A[x].parent;
           y=A[y].parent;
        }
    }
   if(A[x].parent==A[y].parent) return 1;
   else return 0;

}

int main(){
    int q,n,com,x,y;

    cin>>n>>q;

    for(int i=0;i<n;i++){
        A[i].parent=i;
        A[i].key=i;
    }

    for(int i=0;i<q;i++){
       cin >> com >> x >> y;
        if(com==0) unite(x,y);
        else if(com==1) cout<<findset(x,y)<<endl;
    }

    //for(int i=0;i<n;i++){
        //cout<<"parent "<<A[i].parent<<" key "<<A[i].key<<endl;
    //}

}
