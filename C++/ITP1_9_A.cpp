#include <iostream>
#include <string>
using namespace std;

int main(){
    string W,T;
    cin>>W;
    int ans=0;
    while(cin>>T){
        if(T=="END_OF_TEXT") break;

        for(int i=0;i<T.size();i++){
            T[i]=tolower(T[i]);
        }
        ans += T==W;
    }cout<<ans<<endl;
    return 0;
}
