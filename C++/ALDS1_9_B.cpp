#include<iostream>
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

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=n/2;i>=1;i--){
        maxHeap(i);
    }
    for(int i= 1;i<=n;i++){
       cout<<" " <<A[i];
    }
    cout<<endl;
    return 0;
}
