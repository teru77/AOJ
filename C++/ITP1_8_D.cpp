#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main(){
    char s1[100],s2[100],p[100];
    cin>>s1>>p;
    strcpy(s2, s1);

    strcat(s1,s2);
        if ( strstr(s1, p) == NULL ) printf("No\n");
        else printf("Yes\n");
    return 0;
}
