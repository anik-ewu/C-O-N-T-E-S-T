#include<bits/stdc++.h>
using namespace std;

using namespace std;
#define Fast   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int      N =405;

char arr[N][N];

int main(){

    Fast;
    //freopen("in.txt", "r", stdin);
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector< pair< int, int > > vp;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='*')vp.push_back({i,j});
            }
        }
        int x1=vp[0].first;
        int y1=vp[0].second;
        int x2=vp[1].first;
        int y2=vp[1].second;
        if(x1==x2){
            if(x1+1<=n){
                arr[x1+1][y1]='*';
                arr[x2+1][y2]='*';
            }
            else{
                arr[x1-1][y1]='*';
                arr[x2-1][y2]='*';
            }
        }
        else if(y1==y2){
            if(y1+1<=n){
                arr[x1][y1+1]='*';
                arr[x2][y2+1]='*';
            }
            else{
                arr[x1][y1-1]='*';
                arr[x2][y2-1]='*';
            }
        }
        else{
            arr[x1][y2]='*';
            arr[x2][y1]='*';
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }





    return 0;
}
