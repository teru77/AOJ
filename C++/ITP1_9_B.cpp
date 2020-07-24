#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    int n,h;
    while(cin>>s1){
        if(s1 =="-")break;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>h;
            s2=s1.substr(0,h);
            s1=s1.erase(0,h);
            s1 += s2;
        }
    cout<<s1<<endl;
    }
    return 0;

}
