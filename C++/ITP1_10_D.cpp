#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x[n]={ };
    double y[n]={ };
    double s[n]={ };
    double s1=0,s2=0,s3=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    for(int i=0;i<n;i++){
        s1+=abs(x[i]-y[i]);
        s2+=abs((x[i]-y[i])*(x[i]-y[i]));
        s3+=abs((x[i]-y[i])*(x[i]-y[i])*(x[i]-y[i]));
    }
    printf("%8lf\n",s1);
    printf("%8lf\n",sqrt(s2));
    printf("%8lf\n",pow(s3,1.0/3.0));

    for(int i=0;i<n;i++){
        s[i]=abs(x[i]-y[i]);
        if(i==0){
            ans=s[i];
        }
        else if(s[i]>ans){
            ans =s[i];
        }
    }
    printf("%8lf\n",ans);
    return 0;
}
