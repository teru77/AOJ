#include <iostream>
using namespace std;
int S;
int main(){
    cin >> S;
    int h = S/3600;
    int m = S%3600/60;
    int s = S%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
