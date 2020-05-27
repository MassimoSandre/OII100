#include <iostream>
#include <stdio.h>

#define min(a, b) (a < b ? a : b)

int fest(int n, int *m,int d1, int d2, int d3, int d4) {
    if(n <= 0) return 0;
    else {
        int a,b,c,d;
        if(d1 > 0) {
            a = fest(n-2,m,d1-1,d2,d3,d4)+m[0];
        }
        else a = 2000000000;


        if(d2 > 0) {
            b = fest(n-4,m,d1,d2-1,d3,d4)+m[1];
        }
        else b = 2000000000;


        if(d3 > 0) {
            c = fest(n-5,m,d1,d2,d3-1,d4)+m[2];
        }
        else c = 2000000000;


        if(d4 > 0) {
            d = fest(n-7,m,d1,d2,d3,d4-1)+m[3];
        }
        else d = 2000000000;


        return min(min(a,b),min(c,d));
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m[4],d1,d2,d3,d4;

    scanf("%d %d %d %d %d %d %d %d %d",&n,&d1,&m[0],&d2,&m[1],&d3,&m[2],&d4,&m[3]);

    printf("%d",fest(n,m,d1,d2,d3,d4));



    return 0;
}
