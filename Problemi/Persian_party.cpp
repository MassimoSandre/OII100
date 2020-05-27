#include <iostream>
#include <algorithm>

typedef struct sPersona {
    int ora;
    bool entra;
} tPersona;

bool comparePersona(tPersona t1, tPersona t2) {
    return t1.ora < t2.ora;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    tPersona v[n*2];
    for(i = 0; i < n*2;i+=2) {
        scanf("%d %d",&v[i].ora,&v[i+1].ora);
        v[i].entra = true;
        v[i+1].entra = false;
    }



    std::sort(v,v+(n*2),comparePersona);



    long long nmp = 1, //numero di persone in casa
        nsm = 0; // numero di strette di mano;

    i = 0;
    while(i < n*2) {


        nsm += (v[i].entra ? nmp++ : --nmp);

        i++;
    }
    std::cout << nsm;
    return 0;
}
