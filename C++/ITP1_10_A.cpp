#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double a=x2-x1;
    double b=y2-y1;
    double c=pow(a,2);
    double d=pow(b,2);
    double e=c+d;
    double ans =sqrt(e);

    printf("%8lf\n",ans);
}
