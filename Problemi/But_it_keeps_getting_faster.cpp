#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char trg[12],sup[12];
    int n;
    scanf("%s",trg);
    scanf("%d",&n);
    int wps = 1,lct,sec =1;
    while(n>0) {
        lct = 0;

        for(int i = 0; i < wps&&n>0;i++) {
            scanf("%s",sup);

            if(strcmp(sup,trg)==0)lct++;
            n--;
        }

        wps += lct;
        if(n>0)sec++;
    }
    printf("%d",sec);
    return 0;
}
