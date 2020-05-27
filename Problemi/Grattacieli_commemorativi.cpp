#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <set>
using namespace std;

typedef pair<long long, long long> pi;

long long costruisci(int N, int M, vector<long long>& H, vector<int>& A, vector<int>& B, vector<int>& C) {
    vector<vector<pi>> gr(N);
    // creo la lista di adiacenza
    for(long long i = 0; i < M;i++) {
        gr[A[i]].push_back(make_pair(B[i],C[i]));
    }

    multiset<int> sst;
    for(int i = 0; i < N;i++) {
        sst.insert(i);
    }

    priority_queue<pi,vector<pi>, greater<pi>> q;

    // parto dal primo palazzo
    q.push(make_pair(H[0],0));

    vector<bool> vis(N,false);
    bool finito = false;

    // memorizzo il nodo di partenza
    int fir = 0;

    do {
        while(!q.empty()) {
            // prendo il primo palazzo nella coda
            pi x = q.top();
            q.pop();

            // ho visitato il nodo
            if(!vis[x.second]) {
                vis[x.second] = true;
                sst.erase(x.second);
            }

            // se il palazzo attuale rispetta i limiti e non è quello di partenza lo salto
            if(x.first >= H[x.second] && x.second != fir) continue;

            // se il palazzo non rispetta i limiti gli assegno il più grande valore che rispetta i limiti
            H[x.second] = x.first;
            // controllo tutte le limitazioni impartite dal proprietario del palazzo attuale
            for(long long i = 0; i < gr[x.second].size();i++) {
                // calcolo la massima altezza che può assumere il palazzo i-esimo
                long long da = x.first + gr[x.second][i].second;
                // se il palazzo supera questa altezza lo aggiungo alla coda
                if(H[gr[x.second][i].first] > da) {
                    q.push(make_pair(da,gr[x.second][i].first));
                }
            }
        }

        // verifico che non siano rimasti palazzi da controllare
        /*finito = true;
        for(int i = 0; i< N&&finito;i++) {
            if(!vis[i]) {
                finito = false;
                //inserisco nella coda il primo palazzo non controllato
                q.push(make_pair(H[i],i));
                fir = i;
            }
        }*/
        if(!sst.empty()){
            q.push(make_pair(H[*sst.begin()],*sst.begin()));
            fir = *sst.begin();
        }
        // ripeto finché non avrò visitato tutti i nodi
    }while(!sst.empty());

    // calcolo e ritorno il risultato
    long long somma=0;
    for(int i = 0; i < N;i++) {
        somma+=H[i];
    }
    return somma;
}
