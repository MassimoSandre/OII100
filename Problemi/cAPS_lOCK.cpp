#include <bits/stdc++.h>

using namespace std;

void aggiusta(int N, char S[]) {
    for(int i = 0; i < N; i++) {
        if(S[i]>=65 && S[i]<=90) {
            S[i]+=32;
        }
        else if(S[i]>=97 && S[i]<=122) {
            S[i]-=32;
        }
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d\n",&n);
    char s[n+2];
    fgets(s,n+1,stdin);
    s[n+1] = '\0';
    aggiusta(n,s);
    printf("%s",s);
    return 0;
}
