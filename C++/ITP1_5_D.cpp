#include <iostream>
using namespace std;

int main(){
    int n;

    cin >>n;
    for (int i=1; i<=n; i++){
        int x=i/10,y=x/10,z=y/10;
        if(i%3==0) cout << " "<<i;
        else if(i%10==3 || x%10==3 || y%10==3 || z%10 == 3) cout << " " <<i;

    }cout << endl;
    return 0;
}
