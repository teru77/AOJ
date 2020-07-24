#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char ch;
    int counter[26]={};
    int num;
    while(cin>>ch){
        ch= tolower(ch);
        if(isalpha(ch)){
            num = ch - 'a';
            counter[num]++;
        }
    }
    for(int i=0;i<26;i++){
        printf("%c : %d\n",i+'a',counter[i]);
    }
    return 0;
}
