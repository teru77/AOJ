#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char ch;
    while(1){
    scanf("%c", &ch);
    if('a' <= ch && ch <= 'z'){
        printf("%c",ch-32);
    }else if('A'<= ch && ch <='Z'){
        printf("%c",ch+32);
    }else{
        printf("%c",ch);
    }
    if ( ch == '\n' ) break;
    }
    return 0;
}
