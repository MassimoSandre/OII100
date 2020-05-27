#include <iostream>


int main()
{
    int q;
    long long n,p;

    scanf("%d",&q);
    for(int i = 0; i < q; i++) {
        std::cin >> n;
        if(n == 1 || n == 2) {
            printf("%d",1);
            continue;
        }
        p = 2;
        while(n > p) {
            p*=2;
        }
        p/=2;
        std::cout << (long long)(n-p)*2+1 << std::endl;
    }

    return 0;
}
