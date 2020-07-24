#include <iostream>
using namespace std;

class card{
public:
    char m;
    int n;
};

int main(void){
    int n,min,flag=0;
    card a[36],b[36];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].m>>a[i].n;
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j-1].n>a[j].n)
            swap(a[j-1],a[j]);
        }
    }
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i;j<n;j++){
            if(b[j].n<b[min].n){
                min=j;
            }
        }
        swap(b[i],b[min]);
    }
    for(int i=0;i<n-1;i++)
    cout<<a[i].m<<a[i].n<<" ";
    cout<<a[n-1].m<<a[n-1].n<<endl;
    cout<<"Stable"<<endl;
    for(int i=0;i<n-1;i++){
        if(a[i].m!=b[i].m) flag=1;
        cout<<b[i].m<<b[i].n<<" ";
    }
    cout<<b[n-1].m<<b[n-1].n<<endl;
    if(flag)cout<<"Not stable"<<endl;
    else cout<<"Stable"<<endl;
    return 0;

}
