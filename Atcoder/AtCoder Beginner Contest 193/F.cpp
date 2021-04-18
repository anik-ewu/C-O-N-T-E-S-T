#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              105

char arr[sz][sz];
const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};

bool check(int x, int y, int n){
    return (x>=1 && x<=n && y>=1 && y<=n);
}

void solve(){

    int a,b, n,m, i,j;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(arr[i][j]=='?'){
                int black=0;
                int white=0;
                for(int k=0; k<4; k++){
                    int x=i+fx[k];
                    int y=j+fy[k];
                    if(check(x,y,n)){
                        black+=arr[x][y]=='B';
                        white+=arr[x][y]=='W';
                    }
                }
                if(black<=white){
                    arr[i][j]='B';
                }
                else{
                    arr[i][j]='W';
                }
            }        
        }
    }
    
    ll res=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<arr[i][j];
            if(arr[i][j]=='B'){
                for(int k=0; k<4; k++){
                    int x=i+fx[k];
                    int y=j+fy[k];
                    if(check(x,y,n)){
                        res+=arr[x][y]=='W';
                    }
                }
            }        
        }
        cout<<endl;
    }
    cout<<res<<endl;
}

int main(){
    Fast;///using Fast I/O
    
    read(x); write(x);

    int multitest=0;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

