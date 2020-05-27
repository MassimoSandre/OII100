#include <iostream>

#define min(a,b) (a<b?a:b)


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,i,j;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);

    j = 0;
    for(i = 100; i >= 0; i--) {
        while(k >= i && j < n) {
            j++;
            scanf("%d",&k);
        }
        printf("%d ",j);
    }

    return 0;
}
