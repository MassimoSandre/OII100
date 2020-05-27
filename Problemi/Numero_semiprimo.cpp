#include <iostream>
#include <math.h>

int p;

int primo(int x) {
    int l = sqrt(x);
    for (int i = 2; i <= l; i++) {
        if(x%i==0) {
            p = i;
            return 0;
        }
    }
    return 1;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,p1,p2;
    scanf("%d",&n);

    if(primo(n)) printf("-1");
    else {
        p1 = n/p;
        p2 = p;
        if(primo(p2)&&primo(p1)) printf("%d %d",p2,p1);
        else printf("-1");
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
