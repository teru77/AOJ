#include <iostream>
using namespace std;

int main(){
    int n,q,count=0;

    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)cin>>b[i];
    for(int i=0;i<q;i++){
        int j=0;
        a[n]= b[i];
        while(a[j]!=b[i]){
            j++;
        }
        if(j!=n){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
