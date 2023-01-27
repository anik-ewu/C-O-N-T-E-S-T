#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int mx;
int arr[N];
map<ll, int > fre;
map<ll, int > ffre;

void add(int pos){
    int a=arr[pos];
    fre[a]++;
    ffre[fre[a]]++;
    mx=max(mx,fre[a]);
}
void del(int  pos){
    int a=arr[pos];
    int b=fre[a];
    fre[a]--;
    ffre[b]--;
    if(ffre[b]==0)
        mx=fre[a];
}

void clearTest() {
    mx = 0;
    fre.clear();
    ffre.clear();
}

int main(){

    //read(x);

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        ll cumSum = 0;
        clearTest();
        int res = 0;
        int count[n+5];
        int brr[n+5];

        count[0] = 0;
        for(int i=0; i<n; i++) {
            cin>>a;
            cumSum += a;
            arr[i] = cumSum;
            res += (cumSum == 0);
            count[i] = res;
            add(i);
            brr[i] = a;
        }

        int res2 = 0;
        for(int i=0; i<n; i++) {
            if(brr[i]==0) {
                int mxxx = mx;
                if(i) {
                    if(fre[arr[i]] == mx and ffre[mx]==1 and cumSum-arr[i]!=0)
                        mxxx--;
                    res2 = max(res2, mxxx+count[i-1]);
                } else {
                    if(fre[arr[i]] == mx and ffre[mx]==1)
                        mxxx--;
                    res2 = max(res2, mxxx);
                }
            }
            del(i);
        }

        cout<<max(res, res2)<<endl;

    }

    return 0;
}
