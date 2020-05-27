#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int  n,valore;
    priority_queue<int, vector<int>, greater<int>> Q;

    cin >> n;
    for(int i = 0; i < n;i++) {
        cin>> valore;
        Q.push(valore);
    }



    int somma=0,t1,t2;
    while(Q.size() > 1) {
        t1 = Q.top();
        Q.pop();
        t2 = Q.top();
        Q.pop();

        somma += t1 + t2;
        Q.push(t1+t2);
    }
    printf("%d",somma);
    return 0;
}
