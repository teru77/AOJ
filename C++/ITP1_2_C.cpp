#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >>b >>c;
    if(a<=b && b<=c && a<=c) cout << a << " "<< b <<" " << c <<endl;
    else if(a<=b && c<=b && a<=c ) cout << a << " " <<c << " " << b << endl;
    else if(b<=a && a<=c && b<=c) cout << b<<" " << a<<" "<< c <<endl;
    else if(b<=a && c<=a && b<=c) cout << b<< " " << c << " " << a <<endl;
    else if(c<=a && a<=b &&c<=b)  cout << c <<" " << a <<" "<< b << endl;
    else if(c<=a && b<=a &&c<=b)  cout << c <<" " << b <<" "<< a <<endl;
    return 0;
}
