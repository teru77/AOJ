#include <iostream>
#include <vector>
using namespace std;
#define MAX 100001

vector <int> A(MAX);

void add(int i,int x){
   A[i]=A[i]+x;
}

int getsum(int s,int t){
    int sum=0;
    for(int i=s;i<t+1;i++){
        sum=sum+A[i];
    }

    return sum;
}

int main(){
    int n,q;
    int com,x,y;
    cin>>n>>q;

    for(int i=0;i<n;i++){
        A[i]=0;
    }
    for(int i=0;i<q;i++){
        cin>>com>>x>>y;
        if(com==0) add(x,y);
        else if(com==1)cout<<getsum(x,y)<<endl;
    }

    return 0;

}
