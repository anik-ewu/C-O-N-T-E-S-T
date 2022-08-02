#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

bool isPrefix(string s, string p, int i) {

    int j =  0;

    while(j<=p.size() && i<=s.size()) {
        if(j==p.size())
            return true;
        if(i==s.size())
            return false;
        if(s[i] != p[j])
            return false;
        i++;
        j++;
    }

}

int main(){


    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        string s, p;
        vector<string> vs;

        cin>>p;
        cin>>n;
        for(int i=1; i<=n; i++) {
            cin>>s;
            vs.push_back(s);
        }

        int maxMatch = 0;
        int res = -1;
        vector<pair< int , int > > vp;

        for(int i=0; i<p.size(); i++) {

            int tempMatch = maxMatch;
            int l , r;
            for(int j=i; j<=maxMatch; j++) {
                for(int k=0; k<n; k++) {
                    if(isPrefix(p,vs[k], j)) {
                        int index = j+vs[k].size();
                        if(index > tempMatch) {
                            tempMatch  = index;
                            l = k+1;
                            r = j+1;
                        }
                    }
                }
            }
            vp.push_back({l, r});
            if(tempMatch == p.size()) {
                res = i;
                break;
            }
            if(tempMatch == maxMatch)
                break;
            maxMatch = tempMatch;
        }

        if(res != -1) {
            cout<<vp.size()<<endl;
            for(int i = 0; i<vp.size(); i++) {
                cout<<vp[i].first<<' '<<vp[i].second<<endl;
            }

        } else {
            cout<<-1<<endl;
        }

    }

    return 0;
}
