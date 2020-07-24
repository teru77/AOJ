#include <iostream>
#include<stack>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
    string t;
    stack<int>a;
    int t1;

    while(cin>>t){
        if(t=="+"){
            t1=a.top();a.pop();
            t1+=a.top();a.pop();
            a.push(t1);
    }else if(t=="*"){
            t1=a.top();a.pop();
            t1*=a.top();a.pop();
            a.push(t1);
    }else if(t=="-"){
        t1=-a.top();a.pop();
        t1+=a.top();a.pop();
        a.push(t1);
    }else a.push(atoi(t.c_str()));
    }
    cout<<a.top()<<endl;
    return 0;
}
