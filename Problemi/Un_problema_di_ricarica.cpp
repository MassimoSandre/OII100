#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,m,tprec = 1,t1,t2,intr,i,crcmn = 1,crc = 1,j;

    scanf("%d",&n);
    scanf("%d",&m);



    for(i = 0; i < n; i++) {
        scanf("%d %d",&t1,&t2);
        intr = t2-t1+1;
        crc-=  t1- tprec;

        if(crc <= 0) {
            crcmn += -1*crc +1;
            crc = 1;
        }

        crc += intr;

        tprec = t2+1;
    }

    if(t2 < m) {
        crc-=  m - tprec + 1;

        if(crc <= 0) {
            crcmn += -1*crc +1;
            crc = 1;
        }
    }

    printf("%d",crcmn);

    return 0;
}
