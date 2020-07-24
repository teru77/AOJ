#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
    double a,b;
    int C;
    cin>>a >> b >> C;
    double PI = acos(-1);
    double d=(PI*C/180);
    double s=a*b*sin(d)/2;
    double l=a+b+sqrt(a*a+b*b-2*a*b*cos(d));
    double h=(2*s)/a;

    printf("%8lf\n",s);
    printf("%8lf\n",l);
    printf("%8lf\n",h);

    return 0;
}
