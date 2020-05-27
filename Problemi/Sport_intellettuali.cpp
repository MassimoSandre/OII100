#include <iostream>


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);

    int n,i;
    scanf("%d",&n);
    int v[n],k[n],j=0;
    for(i = 0; i < n; i++) scanf("%d",&v[i]);

    int pari=n/2+1, dispari=n/2,pd = 0,dd = 0;

    for(i = 0; i < n; i++) {
        if(i > 0) {
            if(v[i-1] % 2 == 0) pd++;
            else dd++;
        }
        if(v[i] % 2 == 0) pari--;
        else dispari--;
        if(pari == dispari&&pd==dd) {
            k[j++] = v[i];
        }
    }

    printf("%d\n",j);
    for(i = 0; i < j; i++) printf("%d ",k[i]);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
