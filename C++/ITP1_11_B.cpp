#include <iostream>
using namespace std;
int main(){
    int a,b,q,n[6];
    for(int i=0;i<6;i++)cin>>n[i];
    cin>>q;
    for(int s=0;s<q;s++){
        cin>>a>>b;
        if(a==n[0]&&b==n[1])cout<<n[2]<<endl;
        if(a==n[0]&&b==n[2])cout<<n[4]<<endl;
        if(a==n[0]&&b==n[3])cout<<n[1]<<endl;
        if(a==n[0]&&b==n[4])cout<<n[3]<<endl;
        if(a==n[1]&&b==n[0])cout<<n[3]<<endl;
        if(a==n[1]&&b==n[2])cout<<n[0]<<endl;
        if(a==n[1]&&b==n[3])cout<<n[5]<<endl;
        if(a==n[1]&&b==n[5])cout<<n[2]<<endl;
        if(a==n[2]&&b==n[0])cout<<n[1]<<endl;
        if(a==n[2]&&b==n[1])cout<<n[5]<<endl;
        if(a==n[2]&&b==n[4])cout<<n[0]<<endl;
        if(a==n[2]&&b==n[5])cout<<n[4]<<endl;
        if(a==n[3]&&b==n[0])cout<<n[4]<<endl;
        if(a==n[3]&&b==n[1])cout<<n[0]<<endl;
        if(a==n[3]&&b==n[4])cout<<n[5]<<endl;
        if(a==n[3]&&b==n[5])cout<<n[1]<<endl;
        if(a==n[4]&&b==n[0])cout<<n[2]<<endl;
        if(a==n[4]&&b==n[2])cout<<n[5]<<endl;
        if(a==n[4]&&b==n[3])cout<<n[0]<<endl;
        if(a==n[4]&&b==n[5])cout<<n[3]<<endl;
        if(a==n[5]&&b==n[1])cout<<n[3]<<endl;
        if(a==n[5]&&b==n[2])cout<<n[1]<<endl;
        if(a==n[5]&&b==n[3])cout<<n[4]<<endl;
        if(a==n[5]&&b==n[4])cout<<n[2]<<endl;
        }return 0;
}
