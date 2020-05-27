#include <bits/stdc++.h>

using namespace std;


int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m,n;
    cin >> m >> n;
    vector<string> v(m);
    vector<int> perm(m);
    for(int i = 0; i < m;i++) {
        cin >> v[i];
        perm[i] = i;
    }

    bool tr = false,br;
    while(!tr) {
        br = false;
        for(int i = 0; i < n&&!br;i++) {
            for(int j = 0; j < m/2 && !br;j++) {

                if(v[perm[j]][i]!=v[perm[m-j-1]][i]&&v[perm[j]][i]!='0'&&v[perm[m-j-1]][i]!='0') {
                    br = true;
                    //cout << v[perm[j]][i] << " " << v[perm[m-j-1]][i] << " ";
                }
            }
        }
        //system("PAUSE");
        if(!br) tr = true;
        else next_permutation(perm.begin(),perm.end());
        /*for(int i = 0; i < m;i++) {
            cout << perm[i] << " ";
        }
        cout << endl;
        system("PAUSE");*/
    }

    for(int i = 0; i < m;i++ ){
        cout << v[perm[i]] << endl;
    }

    return 0;
}
