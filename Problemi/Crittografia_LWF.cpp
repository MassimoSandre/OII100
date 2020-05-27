#include <iostream>
#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a=1,b=1,k=0,n,temp,v[31],prim = -1;
    for(int i = 0; i < 31; i++) v[i] = 0;
    scanf("%d",&n);

    while(n > 0) {
        a=1;
        b=1;
        k=0;
        while(b < n) {
            temp = a + b;
            a = b;
            b = temp;
            k++;
        }
        if(prim == -1) prim = k+1;
        v[k] = 1;
        n-=a;

    }
    for(int i = 0; i < prim; i++)
        printf("%d",v[i]);
    return 0;
}
