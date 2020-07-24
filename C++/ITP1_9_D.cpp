#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,str2;
    int n=0;
    cin>>str>>n;

    for(int i=0;i<n;i++){
        string str3;
        int x=0;
        int y=0;
        cin>>str2;
        if(str2 == "print"){
            cin>>x>>y;
            cout<<str.substr(x,y - x + 1)<<endl;
        }
        else if(str2 == "reverse"){
            cin>>x>>y;
            for(int j=0;j<=y - x;j++){
                str3 += str[y - j];
            }
            str.replace(x,y - x + 1,str3);

        }
        else if(str2 == "replace"){
            cin>>x>>y>>str3;
            str.replace(x,y - x + 1,str3);
        }
    }
    return 0;
}
