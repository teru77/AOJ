#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    int n;
    string str1, str2;
    map<string, int> dic;
    cin >> n;

    for( int i = 0; i < n; i++ ){
        cin >> str1 >> str2;
        if( str1 == "insert" )
            dic[str2] = 1;
        else{
            if( dic[str2] == 1 ) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    return 0;
}
