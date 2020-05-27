#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l[1000];

    unsigned long long w = 1;

    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&l[i]);
    }
    for(int i = n-1; i >= 0; i--) {
        w *= l[i];
        w++;
    }
    std::cout << w << std::endl;
    return 0;
}
