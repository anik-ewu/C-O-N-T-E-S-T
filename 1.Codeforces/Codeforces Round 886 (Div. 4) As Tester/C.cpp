#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

char arr[10][10];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        int x = -1;
        int y = -1;
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin>>arr[i][j];
                if (arr[i][j] != '.' && x == -1) {
                    x = i;
                    y = j;
                }
            }
        }

        while(x <= 8 && arr[x][y] != '.') {
            cout<<arr[x][y];
            x++;
        }

        cout<<endl;
    }

    return 0;
}
