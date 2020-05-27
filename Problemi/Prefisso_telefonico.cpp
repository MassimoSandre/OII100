#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define min(a,b) (a < b?a:b)

int main()
{
    int n,len,i;
    scanf("%d",&n);
    char m[n][100];

    for( i = 0; i< n;i++) scanf("%s",m[i]);

    len = min(strlen(m[0]),20);

    i=0;
    bool trov = false;
    while(!trov) {
        for(; i < n-1;i++) {
            m[i][len]='\0';
            m[i+1][len]='\0';
            if(strcmp(m[i],m[i+1])!=0) {
                break;
            }
        }
        if(i == n-1) {
            trov =true;
        }
        else {
            len--;
        }

    }
    printf("%d",len);


    return 0;
}
