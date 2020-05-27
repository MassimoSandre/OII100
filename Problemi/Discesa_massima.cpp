#include <iostream>
#include <stdio.h>

#define max(a,b) (a > b ? a : b)

int discesa(int m[10][10], int d,int x,int y) {
    if(y == d) return 0;
    else {
        int a = discesa(m,d,x,y+1) + m[y][x],
            b = discesa(m,d,x+1,y+1) + m[y][x];
        return max(a,b);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m[10][10],d,i,j;

    scanf("%d",&d);

    for(i = 0; i < d; i++) {
        for(j = 0; j < i+1; j++) {
            scanf("%d",&m[i][j]);
        }
    }

    printf("%d",discesa(m,d,0,0));

    return 0;
}