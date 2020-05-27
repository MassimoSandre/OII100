#include <stdio.h>
#include <assert.h>

#define MAXN 100000

double estimate(int N, int C[]) {
    int totali = 0, nascosti =0;
    for(int i = 0; i < N;i++) {
        if (C[i] == 2) nascosti++;
        totali+=C[i];
    }
    return (double)((double)nascosti*(nascosti+1))/(2*(totali));
}


int C[MAXN];

int main() {
    FILE *fr, *fw;
    int N, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &N));
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &C[i]));

    fprintf(fw, "%lf\n", estimate(N, C));
    fclose(fr);
    fclose(fw);
    return 0;
}
