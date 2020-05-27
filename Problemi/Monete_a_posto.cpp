#include <bits/stdc++.h>

using namespace std;

int sc=0;


int calcola(int st, vector<vector<int>>& gr, vector<int>& val) {
    int k=0;
    for(int i = 0; i < gr[st].size();i++) {
        k+=calcola(gr[st][i],gr,val);
    }
    val[st]+=k;
    if(val[st]<=0) {
        sc+=(val[st]-1)*(-1);
        return val[st]-1;
    }
    else{
        sc+=(val[st]-1);
        return val[st]-1;
    }
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,temp;
    cin >> n;
    vector<int> val(n);
    vector<vector<int>> gr(n);
    for(int i = 0; i < n;i++) {
        cin >> val[i];
    }
    for(int i = 0; i < n-1;i++) {
        cin >> temp;
        gr[temp-1].push_back(i+1);
    }
    temp = calcola(0,gr,val);
    cout << sc;
    return 0;
}
