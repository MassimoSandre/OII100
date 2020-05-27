#include <iostream>
//#include <vector>
#include <stdlib.h>
//using namespace std;

typedef struct {
    int a;
    int w;
    int b;
} spostamento;

int main()
{
    int n,m,t1,t2,t3,mn = 2000000000,bank = -1,sp=0;
    scanf("%d %d",&n,&m);
    int v[n];
    spostamento ch[n];
    for(int i = 0; i < n;i++) {
        v[i] = 0;
    }

    for(int i = 0; i < m;i++) {
        scanf("%d %d %d",&t1,&t3,&t2);

        v[t1]=v[t1]-t2;
        v[t3]=v[t3]+t2;
    }

    for(int i = 0; i < n;i++) {
        if(v[i]<mn) {
            mn = v[i];
            bank = i;
        }
    }




    //system("PAUSE");
    for(int i = 0; i < n;i++) {
        if(i != bank) {
            if(v[i] < 0) {
                ch[sp].a = bank;
                ch[sp].b = i;
                ch[sp].w = v[i]*-1;
                sp++;
                v[bank] += v[i];
                v[i] = 0;
            }
            else if(v[i]>0){
                ch[sp].a = i;
                ch[sp].b = bank;
                ch[sp].w = v[i];
                sp++;
                v[bank] += v[i];
                v[i] = 0;
            }
        }
        //system("PAUSE");
    }
    //system("PAUSE");
    printf("%d\n",sp);
    for(int i = 0; i < sp;i++) {
        printf("%d %d %d\n",ch[i].a,ch[i].b,ch[i].w);
    }

    return 0;
}
