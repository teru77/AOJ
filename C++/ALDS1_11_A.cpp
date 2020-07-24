#include <iostream>
using namespace std;
#define MAX 100

int main(){
    int n,u,k,v;
    int m[MAX][MAX];

    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            m[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        cin >> u >> k;
        u--;
        for(int j=0;j<k;j++){
            cin >>v;
            v--;
            m[u][v]=1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=0)cout<<" ";
            cout << m[i][j];
        }cout<<endl;
    }

    return 0;

}
