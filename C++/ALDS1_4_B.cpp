#include <iostream>
using namespace std;

int main(){
    int n,q,count=0;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)cin>>b[i];
    for(int i=0;i<q;i++){
        int j=0;
        int m=n-1;
        if(b[i]== a[j] || b[i]==a[m]){
            count++;
        }
        else{
        while(true){
            if(b[i] == a[(j+m)/2]){
            count++;
            break;
            }
            else if(j+1 == m) break;
            else if(b[i]>a[(j+m)/2]) j=(j+m)/2;
            else m=(j+m)/2;
        }
        }
    }
    cout<<count<<endl;
    return 0;
}
