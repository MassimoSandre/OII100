#include <bits/stdc++.h>

using namespace std;

bool compare(vector<int> t1, vector<int> t2) {
    if(t1[0]==t2[0])  {
        if(t1[1]==t2[1]) {
            return t1[2]<t2[2];
        }
        else return t1[1]>t2[1];
    }
    else return t1[0]>t2[0];
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	
	// senza queste 2 istruzioni questa soluzione va fuori tempo negli ultimi 2 subtask
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
    int n,t,p;
    cin >> n >> t>> p;
    p--;
    vector<vector<int>> v(n,vector<int>(t));
    vector<int> tValue(t,0);
    vector<vector<int>> nPoint(n,vector<int>(3,0));
    for(int i = 0; i < n;i++) {
        for(int j = 0; j < t;j++) {
            cin >> v[i][j];
            if(v[i][j]==0)tValue[j]++;
        }
    }
    for(int i = 0; i < n;i++) {
        nPoint[i][2] = i;
        for(int j = 0; j < t;j++) {
            if(v[i][j]==1){
                nPoint[i][0]+=tValue[j];
                nPoint[i][1]++;
            }
        }
    }

    sort(nPoint.begin(),nPoint.end(),compare);

    for(int i = 0; i < n;i++) {
        if(nPoint[i][2]==p) {
            cout << nPoint[i][0]<<" " <<i+1 << endl;
            break;
        }
    }
    return 0;
}
