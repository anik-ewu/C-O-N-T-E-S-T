#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int mat[55][55];


bool check(int x, int y, int n){

    for(int i=y-1; i>=1; i--){
        if(mat[x][i]){
            bool ok = false;
            int k = x-1;
            while(k>=1){
                if(mat[k][i]){
                    ok = true;
                    break;
                }
                k--;
            }
            k = x+1;
            while(k<=n){
                if(mat[k][i]){
                    ok = true;
                    break;
                }
                k++;
            }
            if(!ok)
                return false;
        }
    }
    return true;
}


int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        int val;
        memset(mat, 0, sizeof(mat));

        for(int i=1; i<=n; i++){
            cin>>val;
            while(val){
               if(val<=n){
                    mat[i][val] = 1;
               }
               val /= 2;
            }
        }

        bool ok = true;
        int idx =0;
        for(int i=n; i>=1; i--){
            bool temp = false;
            idx = 0;
            for(int j=1; j<=n; j++){
                if(mat[j][i]){
                    if(check(j, i, n)){
                        temp = true;
                        idx = j;
                        break;
                    }
                }
            }
            if(!temp){
                ok = false;
                break;
            }
            for(int j=1; j<=n; j++){
                mat[idx][j]=0;
            }
        }



        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}
