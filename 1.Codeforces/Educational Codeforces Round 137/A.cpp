#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        int notUsed[11];
        memset(notUsed, 0, sizeof(notUsed));
        for(int i=1; i<=n; i++) {
            cin>>a;
            notUsed[a] = 1;
        }

        int total = 0;
        for(int i=0; i<=9; i++) {
            if(notUsed[i])
                continue;
            for(int j=0; j<=9; j++) {
                if(notUsed[j])
                    continue;
                for(int k=0; k<=9; k++) {
                    if(notUsed[k])
                        continue;
                    for(int l=0; l<=9; l++){
                        if(notUsed[l])
                            continue;
                        set<int>st;
                        map<int, int>mp;
                        mp.clear();
                        mp[i]++;
                        mp[j]++;
                        mp[k]++;
                        mp[l]++;
                        st.insert(i);
                        st.insert(j);
                        st.insert(k);
                        st.insert(l);
                        if(st.size() == 2 && (mp[i]==0 || mp[i]==2) && (mp[j]==0 || mp[j]==2) &&
                           (mp[k]==0 || mp[k]==2) && (mp[l]==0 || mp[l]==2)) {
                            total++;
                        }
                    }
                }
            }
        }
        cout<<total<<endl;




    }

    return 0;
}
