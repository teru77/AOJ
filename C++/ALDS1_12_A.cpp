#include <iostream>
using namespace std;
#define N 100
static const int white=0;
static const int gray=1;
static const int black=2;
static const int infty=(1<<21);

int n,M[N][N];

int prim(){
    int u,minv;
    int d[N],p[N],color[N];

    for(int i=0;i<n;i++){
        d[i]=infty;
        p[i]=-1;
        color[i]=white;
    }
    d[0]=0;

    while(1){
        minv=infty;
        u=-1;
        for(int i=0;i<n;i++){
            if(minv>d[i]&&color[i]!=black){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1)break;
        color[u]=black;

        for(int v=0;v<n;v++){
            if(color[v]!=black&&M[u][v]!=infty){
                if(d[v]>M[u][v]){
                    d[v]=M[u][v];
                    p[v]=u;
                    color[v]=gray;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if (p[i]!=-1)sum += M[i][p[i]];
    }
    return sum;
    }

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            M[i][j]=(e==-1)?infty:e;
        }
    }
    cout<<prim()<<endl;

    return 0;
}
