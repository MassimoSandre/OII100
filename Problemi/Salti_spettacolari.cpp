#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

     int d,s = 0;
    scanf("%d",&d);
    while(d > 0) {
        d-=pow(2,(int)log2(d));
        s++;
    }
    printf("%d",s);



    fclose(stdin);
    fclose(stdout);
    return 0;
}
