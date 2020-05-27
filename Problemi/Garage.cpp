#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    vector<int> r(n),avai(n,-1),w(m),ad(m*2);
    for(int i = 0; i < n;i++) {
        cin >> r[i];
    }
    for(int i = 0; i < m;i++) {
        cin >> w[i];
    }
    for(int i = 0; i < m*2;i++) {
        cin >> ad[i];
    }

    queue<int> q;




    int pd = n,guad = 0;
    for(int i = 0; i < m*2;i++) {
        if(ad[i]<0) {

            for(int j = 0; j < n;j++) {
                if(avai[j]==abs(ad[i])) {
                    avai[j]=-1;
                    pd++;
                    break;
                }
            }
        }
        else {
            q.push(ad[i]);
        }

        if(!q.empty() && pd > 0) {
            int lst = 0,k;
            while(pd>0&&!q.empty()) {
                k = q.front();
                q.pop();
                for(int j = lst; j < n;j++) {
                    if(avai[j]==-1) {
                        guad+=w[k-1]*r[j];
                        avai[j] = k;
                        pd--;
                        lst = j+1;
                        j = n;
                    }
                }
            }
        }
    }
    cout << guad;
    return 0;
}
