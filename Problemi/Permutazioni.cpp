#include <bits/stdc++.h>

using namespace std;

unsigned long long fattoriale(unsigned long long n, vector<unsigned long long>& memo) {
    if(n == 0 || n == 1) return 1;
    if(memo[n]==-1) {
        memo[n] = (n%1000000007)*(fattoriale(n-1,memo)%1000000007);
        memo[n] = memo[n]%1000000007;
    }
    return memo[n];
}

int trova(int N) {
    if(N == 1) return 1;
    if(N == 2) return 2;
    vector<unsigned long long> fact(1000001,-1);

    unsigned long long ris = 0;
    for(unsigned long long i = 0; i < N;i++) {
        ris+=fattoriale(i,fact);
        ris=ris%1000000007;
    }
    ris+=2;
    return ris%1000000007;
}
