#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    int n,q,t;
    int sum=0;
    string s;

    queue<string> que1;
    queue<int> que2;

    cin>>n>>q;

    for(int i=0;i<n;i++){
        cin>>s>>t;
        que1.push(s);
        que2.push(t);
    }
    while(que2.empty()==0){
        s=que1.front();
        t=que2.front();
        if(t-q>0){
            sum += q;
            que1.pop();
            que1.push(s);
            que2.pop();
            que2.push(t-q);
        }
        else{
            sum += t;
            cout<<que1.front()<<" "<<sum<<endl;
            que1.pop();
            que2.pop();
        }
    }
    return 0;
}
