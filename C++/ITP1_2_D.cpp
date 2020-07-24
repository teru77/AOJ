#include <iostream>
using namespace std;

int main(){
    int W;
    int H;
    int x;
    int y;
    int r;
    cin >> W >> H >> x >>y >>r;
    if(x+r <= W && y+r <= H && x-r>= 0 &&  y-r >= 0 ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
