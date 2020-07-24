#include<iostream>
#include<string>
using namespace std;
#define MAX 2000000
int n,A[MAX+1];

void maxHeap(int i){
    int l,r,largest;
    l=2*i;
    r=2*i+1;

    if(l<= n&&A[l]>A[i]) largest=l;
    else largest=i;
    if(r<=n&&A[r]>A[largest])largest=r;
    if(largest!=i){
        swap(A[i],A[largest]);
        maxHeap(largest);
    }
}
int extract(){
    int maxv;
    if(n<1)return 0;
    maxv=A[1];
    A[1]=A[n--];
    maxHeap(1);
    return  maxv;
}

void increase(int i,int key){
    if(key<A[i])return;
    A[i]=key;
    while(i>1&&A[i/2]<A[i]){
        swap(A[i],A[i/2]);
        i=i/2;
    }
}

void insert(int key){
    n++;
    A[n]=0;
    increase(n,key);
}

int main(){
    int key;
    char com[10];

    while(1){
        cin>>com;
        if(com[0]=='e'&&com[1]=='n')break;
        if(com[0]=='i'){
            cin>>key;
            insert(key);
        }else{
            cout<<extract()<<endl;
        }
    }
    return 0;
}
