#include <iostream>
using namespace std;
#define N 100
static const int infinity =(1<<21);
static const int white =0;
static const int gray = 1;
static const int black =2;

int n,M[N][N];

void dijkstra(){
    int min,u;
    int color[N],d[N];

    for(int i=0;i<n;i++){
        color[i]=white;
        d[i]=infinity;
    }

    d[0]=0;

    while(1){
        min=infinity;
        int u=-1;
        for(int i=0;i<n;i++){
            if(color[i]!=black&&d[i]<min){
                min=d[i];
                u=i;
            }
        }
        if(min==infinity)break;

        color[u]=black;

        for(int v=0;v<n;v++){
            if(color[v]!=black&&M[u][v]!=infinity){
                if(d[u]+M[u][v]<d[v]){
                    d[v]=d[u]+M[u][v];
                    color[v]=gray;
                }
            }
        }
    }
    for(int i=0;i<n;i++)cout<<i<<" "<<d[i]<<endl;
}

int main(){
    cin>>n;
    int u,k,v,c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)M[i][j]=infinity;
    }
    for(int i=0;i<n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            M[u][v]=c;
        }
    }

    dijkstra();

}
