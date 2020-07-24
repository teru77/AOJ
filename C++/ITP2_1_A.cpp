#include <iostream>
#include <vector>
using namespace std;
int main(){
    int q,n,p,x;
    cin>>q;

    vector<int> A;

    for(int i=0;i<q;i++){
        cin>>n;
        //cout<<"n:"<<n<<endl;
        if(n==0){
            cin>>x;
            A.push_back(x);
        }
        else if(n==1){
            cin>>p;
           cout<< A.at(p)<<endl;
        }
        else if(n==2){
            A.pop_back();
        }
    }
    return 0;
}
