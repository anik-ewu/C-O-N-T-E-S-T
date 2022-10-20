#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

bool arrayIsSorted(vector<int> v) {
    for(int i=1; i<v.size(); i++) {
        if(v[i]< v[i-1])
            return false;
    }
    return true;
}

int main(){

    Fast;

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        vector<int> v;

        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>a;
            v.push_back(a);
        }
        if(arrayIsSorted(v)) {
            cout<<0<<endl;
            continue;
        }

        int countMoves = 0;
        bool flag = true;
        for(int i=2; i<=n and flag; i= i*2) {
            vector<int>temp;
            for(int j=1; j<=n; j++){
                temp.push_back(v[j-1]);

                if(j%i==0) {
                    if(!arrayIsSorted(temp)) {
                        if(v[j-1] < v[j-i]) {
                            sort(v.begin()+j-i, v.begin()+j);
                            countMoves++;
                        }
                        else {
                            flag = false;
                            break;
                        }
                    }
                    temp.clear();
                }
            }
        }

        if(flag && arrayIsSorted(v)){
            cout<<countMoves<<endl;
        }
        else {
            cout<<-1<<endl;
        }


    }

    return 0;
}
