
int fastModExp(unsigned long long a, unsigned long long b, unsigned long long m) {
    if(b == 0) return 1;
    if(b%2==1) {
        return ((unsigned long long)(a%m)*(fastModExp(a,b-1,m)%m))%m;
    }
    else {
        unsigned long long k = fastModExp(a,b/2,m);
        return ((unsigned long long)(k%m)*(k%m))%m;
    }
}

void decifra(int N, int d, int L, int messaggio[], char plaintext[]) {
    plaintext[L] = '\0';
    for(int i = 0; i < L;i++) {
        plaintext[i] = fastModExp(messaggio[i],d,N);
    }
}