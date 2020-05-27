#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    char s1[n],s2[n];
    for(int i = 0; i< n; i++) {
        std::cin>>s1[i];
    }
    for(int i = 0; i< n; i++) {
        std::cin>>s2[i];
    }

    if(std::is_permutation(s1,s1+n,s2)){
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}
