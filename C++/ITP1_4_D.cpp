#include <iostream>
using namespace std;

int main(){
    long long n,a;
    long long max = -1000000;
    long long min = 1000000;
    long long sum = 0;
    cin >>n;
    for(int i;i<n;i++){
        cin>>a;
        if(max<a)max=a;
        if(min>a)min=a;
        sum+=a;
    }
    cout << min <<" "<< max<< " " << sum << endl;
    return 0;
}
