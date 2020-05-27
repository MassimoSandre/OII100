#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

typedef struct {
    bool entra;
    int time;
}tTutor;

bool compareTutor(tTutor t1, tTutor t2) {
    return t1.time < t2.time;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    tTutor v[n*2];
    for(int i = 0; i < n*2;i+=2) {
        scanf("%d %d",&v[i].time,&v[i+1].time);
        v[i].entra = true;
        v[i+1].entra = false;
    }
    std::sort(v,v+(n*2),compareTutor);

    int per = 0;
    int caf = 0;
    for(int i = 0; i < n*2;i++) {
        if(v[i].entra) {
            per++;
            caf+=per;
        }
        else {
            per--;
        }
    }
    printf("%d",caf);

    return 0;
}
