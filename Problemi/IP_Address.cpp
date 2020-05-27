#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a1,a2,a3,a4,b1,b2,b3,b4;
    scanf("%d.%d.%d.%d\n%d.%d.%d.%d",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4);



    unsigned long long a,b,ris;
    a = (unsigned long long)((unsigned long long)a1*16777216)+((unsigned long long)a2*65536)+((unsigned long long)a3*256)+a4;
    b = (unsigned long long)((unsigned long long)b1*16777216)+((unsigned long long)b2*65536)+((unsigned long long)b3*256)+b4;



    ris = b - a + 1;
    std::cout << ris;

    return 0;
}
