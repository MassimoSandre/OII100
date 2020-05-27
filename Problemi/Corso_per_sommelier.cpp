#include <iostream>

#define max(a,b) (a>b?a:b)

int vino(int *v,int n,int m) {
    if(n <= 0) return 0;
    if(v[0]>=m) {
        int a = 1+vino(v+2,n-2,v[0]),
            b = vino(v+1,n-1,m);
        return max(a,b);
    }
    return vino(v+1,n-1,m);
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);

    int v[n];
    for(int i =0; i <n;i++) scanf("%d",&v[i]);

    printf("%d",vino(v,n,0));
    fclose(stdin);
    fclose(stdout);
    return 0;
}
