#include <iostream>
#include <stack>
using namespace std;
static const int N =100;
static const int white=0;
static const int gray=1;
static const int black=2;

int n,M[N][N];
int color[N],d[N],f[N],tt;
int nt[N];

int next(int u){
    for (int v=nt[u];v<n;v++){
        nt[u] = v+1;
        if(M[u][v])return v;    }
        return -1;
}

void dfs_visit(int r){
    for(int i=0;i<n;i++)nt[i]=0;

    stack<int>s;

    s.push(r);
    color[r]=gray;
    d[r]=++tt;

    while(!s.empty()){
        int u=s.top();
        int v=next(u);
        if(v!=-1){
            if(color[v]==white){
                color[v]=gray;
                d[v]=++tt;
                s.push(v);
            }
        }else{
            s.pop();
            color[u]=black;
            f[u]=++tt;
        }
    }
}
void dfs(){
    for(int i=0;i<n;i++){
        color[i]=white;
        nt[i]=0;
    }
    tt=0;
    for(int u=0;u<n;u++){
        if(color[u]==white)dfs_visit(u);
    }
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;

    }
    }
    int main(){
        int u,k,v;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)M[i][j]=0;
        }
        for(int i=0;i<n;i++){
            cin>>u>>k;
            u--;
            for(int j=0;j<k;j++){
                cin>>v;
                v--;
                M[u][v]=1;
            }
        }
        dfs();
        return 0;
}
