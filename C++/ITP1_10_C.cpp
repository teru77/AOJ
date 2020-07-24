#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
    int  n;
    while(1){
        cin>>n;
        if(n==0)break;
        double s[n]={ };
        double m=0,sum=0,a=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            sum += s[i];
        }
        m=sum/n;

        for(int i=0;i<n;i++){
            a += (s[i]-m)*(s[i]-m)/n;
        }
        double ans = sqrt(a);
        printf("%8lf\n",ans);
    }
    return 0;
}
