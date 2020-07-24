#include <iostream>
#include <deque>
using namespace std;

int main(){
    int q,n,p,d,x;

    deque <int> A;

    cin>>q;

    for(int i=0;i<q;i++){
        cin>>n;

        if(n==0){
            cin>>d>>x;
            if(d==0)A.push_front(x);
            else if(d==1)A.push_back(x);
        }
        else if(n==1){
            cin>>p;
            cout<<A.at(p)<<endl;
        }
        else if(n==2){
            cin>>d;
            if(d==0)A.pop_front();
            else if(d==1)A.pop_back();
        }
    }
    return 0;
}
