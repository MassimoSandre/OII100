#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n,value=0,i;
    long long cost = 0;
    scanf("%d",&n);
    int v[n];

    for(i = 0; i < n; i++) {
        scanf("%d",&v[i]);
        
    }

    for(i = 0; i < n; i++) {
        if(v[i] > value) {
            value = v[i];
            cost += v[i];

        }
    }
    std::cout << cost;

    return 0;
}
