#include <iostream>
using namespace std;

int main(){
    int n,i;
    cin >>n;
    int a[n];
    for (i=0;i<n;i++){
    cin >> a[i];
    }
    for(i=n-1;i>-1;i--){
        if(i != n-1){
            cout << " "<<a[i];
        }else{
            cout << a[i];
        }
    }cout << endl;
    return 0;
}
