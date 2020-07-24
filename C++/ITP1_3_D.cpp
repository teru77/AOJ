#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int x,y;
    cin >> a >> b >>c;
    for(x=a; x<=b;x++){
        if(c%x==0){
          y++;
        }
    }
    cout << y << endl;
    return 0;
}
