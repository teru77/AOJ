#include <iostream>
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
         void move_m(int r){
             r=n[1];
             n[1]=n[2];
             n[2]=n[4];
             n[4]=n[3];
             n[3]=r;
         }
    };

int main(){
    Dice x;
    Dice y;
    for(int i=0;i<6;i++)cin>>x.n[i];
    for(int i=0;i<6;i++)cin>>y.n[i];

    for(int i=0; !(x.n[0]==y.n[0] && x.n[1]==y.n[1]);i++){
    if(x.n[3]==y.n[1] || x.n[2]==y.n[1]){
        int a=x.n[0];
        x.n[0]=x.n[3];
        x.n[3]=x.n[5];
        x.n[5]=x.n[2];
        x.n[2]=a;

    }
    for(int j=0;x.n[1]!=y.n[1];j++){
            x.move_n(j);
    }
    for(int k=0;x.n[0]!=y.n[0];k++){
            x.move_e(k);
    }
    }
    if(x.n[2]==y.n[2]&&x.n[3]==y.n[3]&&x.n[4]==y.n[4])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
