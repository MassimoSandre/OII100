#include <bits/stdc++.h>
using namespace std;
#define MAXN 5000
int pizza[MAXN];
int memo[MAXN][MAXN];
 

 
 
int mangia(int a, int b, int somma) {
    if (a==b) return pizza[a];
    if (memo[a][b]==-1) memo[a][b]=max(somma-mangia(a+1, b, somma-pizza[a]), somma-mangia(a, b-1, somma-pizza[b]));
    return memo[a][b];
}
 
 
 
int contentezza (int N, int V[]) {
    int sum=0;
    for (int i=0; i<N; i++) {
        pizza[i] = V[i];
        sum+=V[i];
    }
    memset(memo,-1,sizeof(memo));
    return mangia(0, N-1, sum);
   
}