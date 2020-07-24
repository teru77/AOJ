#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int d = a/b;
    int r = a%b;
    double x = a;
    double y = b;
    double f = x/y;
    printf("%d %d %.5lf\n",d,r,f);
    return 0;
}
