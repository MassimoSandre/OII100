#include <iostream>


int conio(int n) {
    if(n == 1) return 1;
    int N = n;
    n/=2;
    int k,mx = -1;
    for(n;n>=1;n--) {
        if(N%n==0){
            k = 1+conio(n);
            if(k>mx) mx=k;
        }
    }
    return mx;
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",conio(n));
    return 0;
}
