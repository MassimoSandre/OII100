#include <iostream>
#include <vector>
using namespace std;

#define PINF 2000000000
#define MINF -2000000000

int main()
{
    int r,c,k;
    cin >> r >> c >> k;
    int temp;
    vector<int> bx(k,PINF),by(k,PINF),ax(k,MINF),ay(k,MINF);

    for(int i = r-1; i >= 0;i--) {
        for(int j = 0; j < c;j++) {
            cin>>temp;
            temp--;
            if(temp != -1) {
                if(bx[temp] > j) bx[temp] = j;
                if(ax[temp] < j+1) ax[temp] = j+1;
                if(by[temp] > i) by[temp] = i;
                if(ay[temp] < i+1) ay[temp] = i+1;
            }
        }
    }

    for(int i = 0; i < k;i++) {
        cout << bx[i] << " " << by[i] << " "<< ax[i] << " " << ay[i] <<endl;
    }
    return 0;
}
