#include <iostream>
#include <stdio.h>
#include <string.h>
#define NMAX 100000

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char mol[NMAX],ac[12];
    int i=0,j,d2,d5,z=0;

    scanf("%s",mol);
    d2 = 0;
    d5 = 0;
    while(i < strlen(mol)) {

        j = 0;
        while(mol[i]!='x' && i < strlen(mol)) {
            ac[j++] = mol[i++];
        }
        i++;
        ac[j]  = '\0';
        j = atoi(ac);

        while(j % 2 == 0) {
            j/= 2;
            d2++;
        }
        while(j % 5 == 0) {
            j/=5;
            d5++;
        }

    }
    if(d5 < d2) z+=d5;
    else z+=d2;
    printf("%d",z);
    return 0;
}
