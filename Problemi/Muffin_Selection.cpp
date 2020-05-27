#include <iostream>


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, k, sm,i,j,tsm;

    scanf("%d %d",&n,&k);

    int v[n];
    for(i = 0; i < n; i++) scanf("%d",&v[i]);

    tsm = 0;
    for(i = 0; i < k; i++) {
        tsm += v[i];
    }
    sm = tsm;

    j = 0;
    i = k;
    while(i < n) {
        tsm += v[i++];
        tsm -= v[j++];
        if(sm < tsm) sm = tsm;
    }

    printf("%d",sm);

    fclose(stdin);
    fclose(stdout);
    return 0;
}