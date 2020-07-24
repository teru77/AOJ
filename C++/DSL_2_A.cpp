#include <iostream>
#include <vector>
using namespace std;
#define MAX 100001
#define infty (1<<31)-1

vector <int> A(MAX);

void update(int i,int x){
   A[i]=x;
}

int find(int s,int t){
    int ans=infty;
    for(int i=s;i<t+1;i++){
        if(ans>A[i])ans=A[i];
    }

    return ans;
}

int main(){
    int n,q;
    int com,x,y;
    cin>>n>>q;

    for(int i=0;i<n;i++){
        A[i]=infty;
    }
    for(int i=0;i<q;i++){
        cin>>com>>x>>y;
        if(com==0) update(x,y);
        else if(com==1)cout<<find(x,y)<<endl;
    }

    return 0;

}
