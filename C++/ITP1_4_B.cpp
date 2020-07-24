#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    double r;
    cin >> r;

    double p=3.141592653589;
    double s= r*r*p;
    double c= 2*r*p;

    printf("%f %.5f\n", s, c);

    return 0;

}
