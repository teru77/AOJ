#include <iostream>
#include <string>
using namespace std;

struct Dice{
         int n[6];
         void move_n(int r){
             r=n[0];
             n[0]=n[1];
             n[1]=n[5];
             n[5]=n[4];
             n[4]=r;
         }
         void move_s(int r){
             r=n[0];
             n[0]=n[4];
             n[4]=n[5];
             n[5]=n[1];
             n[1]=r;
         }
         void move_w(int r){
             r=n[0];
             n[0]=n[2];
             n[2]=n[5];
             n[5]=n[3];
             n[3]=r;
         }
         void move_e(int r){
             r=n[0];
             n[0]=n[3];
             n[3]=n[5];
             n[5]=n[2];
             n[2]=r;
         }
    };
int main(){
    Dice x;
    string ch;
    for(int i=0;i<6;i++)cin>>x.n[i];
    cin>>ch;
    for(int i=0;i<ch.size();i++){
        if(ch[i]=='N'){
            x.move_n(i);
        }else if(ch[i]=='S'){
            x.move_s(i);
        }else if(ch[i]=='W'){
            x.move_w(i);
        }else if(ch[i]=='E'){
            x.move_e(i);
        }
    }cout<<x.n[0]<<endl;
    return 0;
}
