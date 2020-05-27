#include <iostream>
#include <stdio.h>


int calcolo(int a,int c, int r, int g, int b) {
    int m,k;
    if(r <= g && r <= b)
        m = r;
    else if (g <= r &&  g<=b)
        m = g;
    else
        m = b;

    r*=r;
    g*=g;
    b*=b;
    k = r+g+b;
    return (a * k) + (c * m);
}

int main()
{
    int T, A, C, r,g,b,c1,c2,c3;

    scanf("%d",&T);
    for(int i = 0; i < T; i++) {
        scanf("%d %d %d %d %d",&A,&C,&r,&g,&b);
        c1 = calcolo(A,C,r+1,g,b);
        c2 = calcolo(A,C,r,g+1,b);
        c3 = calcolo(A,C,r,g,b+1);
       
        if(c1 >= c2 && c1 >= c3)
            printf("RED\n");
        else if (c2 >= c1 &&  c2 >= c3)
            printf("GREEN\n");
        else
            printf("BLUE\n");

    }
    return 0;
}
