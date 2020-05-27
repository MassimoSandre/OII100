#include <iostream>

#define MAX 1000

typedef struct sNodo {
    int info;
    int nAdia=0;
    int adia[MAX];
} tNodo;

tNodo *nodi[MAX];
bool trovato = false;
int veroperc[MAX];
int gn;

void retPerc(int *per,int n) {
    if(n == 0) return;
    for(int i = 0; i < n; i++) veroperc[i] = per[i];
    gn = n;
    trovato = true;
}


void cpercorso(bool *visitato,tNodo *&st, int *percorso,int mov,int *dist) {
    if(trovato) return;
    visitato[st->info] = true;
    dist[st->info]=mov;
    percorso[mov++] = st->info;

    for(int i = 0; i < st->nAdia;i++) {
        if(visitato[st->adia[i]]) {
            //printf(" ! %d | %d | %d | %d ! ",dist[st->info],st->adia[i],st->info,mov+dist[nodi[st->adia[i]]->info]);
            if((dist[st->info]+dist[nodi[st->adia[i]]->info]) %2 == 0) {
                int j = 0;
                while(percorso[j] != nodi[st->adia[i]]->info) {
                    j++;
                }
                for(j; j >= 0; j--) {
                    percorso[mov++] = percorso[j];
                }
                if(!trovato) {
                    //printf("\nDIO\n");
                    retPerc(percorso,mov);
                }
                i = st->nAdia;
            }
        }
        else {
            cpercorso(visitato,nodi[st->adia[i]],percorso,mov,dist);
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    int n,m,i,t1,t2;
    scanf("%d %d",&n,&m);
    bool vis[MAX];
    int per[MAX],dist[MAX];


    for( i = 0; i < n; i++) {
        vis[i] = false;
        nodi[i] = (tNodo*)malloc(sizeof(tNodo));
        nodi[i]->info = i;
        nodi[i]->nAdia = 0;
    }


    int k;
    for(i = 0; i < m; i++) {
        scanf("%d %d",&t1,&t2);
        k = nodi[t1]->nAdia++;

        nodi[t1]->adia[k]=t2;

        k = nodi[t2]->nAdia++;
        nodi[t2]->adia[k]=t1;

    }

    cpercorso(vis,nodi[0],per,0,dist);

    printf("%d\n",gn-1);
    for(i = 0; i < gn; i++) printf("%d ",veroperc[i]);

    
    fclose(stdin);
    fclose(stdout);
    return 0;
}
