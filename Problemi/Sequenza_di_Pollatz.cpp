#include <iostream>

int collatz(int n) {
    int l=1;

    while(n!= 1) {
        if(n%2==0) {
            n/=2;
        }
        else {
            n=n*3+1;
        }
        l++;
    }
    return l;
}

int pollatz(int n,int c) {
    int l=1;

    while(n!= 1 && l < c) {
        if(n%2==0) {
            n/=2;
        }
        else {
            n=n*5+1;
        }
        l++;
    }
    return l;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b,t1,t2,k=0;
    scanf("%d %d",&a,&b);


    for(a; a <= b;a++) {
        t1 = collatz(a);
        t2 = pollatz(a,t1);
        if(t2<t1)k++;
        //printf(" | %d %d |",t1,t2);
    }
    printf("%d",k);
    fclose(stdin);
    fclose(stdout);
    return 0;
}
