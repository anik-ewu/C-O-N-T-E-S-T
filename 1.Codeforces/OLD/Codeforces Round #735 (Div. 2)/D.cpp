#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    //Fast;
    int a, b, t, n , m;

    cin>>t;
    while(t--){
        cin>>n;

        if(n<=3){
            for(int i=0; i<n; i++){
                cout<<char('a'+i);
            }
            cout<<endl;
        }
        else{
            for(int i=1; i<n/2; i++){
                printf("b");
            }
            printf("a");
            if(n%2)
                printf("z");
            for(int i=1; i<=n/2; i++){
                printf("b");
            }
            printf("\n");

        }
    }

    return 0;
}
