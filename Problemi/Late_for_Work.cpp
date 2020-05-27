#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,h2,m2,h3,m3;
    scanf("%d %d\n%d %d",&h1,&m1,&h2,&m2);

    h3 = 0;
    while((h1+h3)%24 != h2) {
        h3++;

    }
    //h2+=24;
    if(m1 > m2) {
        h3--;
        m3 = (60-m1)+m2;
    }
    else {
        m3 = m2 - m1;
    }

    if(h3 == -1) h3 = 23;

    printf("%d %d",h3,m3);
    return 0;
}
