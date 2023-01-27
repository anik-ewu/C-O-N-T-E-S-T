#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;
vector<pair<ll,char>>vp;

int main(){

    Fast;

    ll distance;
    char direction;
    ll t=1, n , l, caseCounter = 1;
    cin>>t;
    while(t--){
        cin>>l>>n;
        vp.clear();
        for(int i=1; i<=n; i++) {
            cin>>distance;
            cin>>direction;
            vp.push_back({distance, direction});
        }

        vector<pair<ll,char>>compressedData;
        compressedData.push_back(vp[0]);
        int cmpDataSize = 0;
        for(int i=1; i<n; i++) {
            if(vp[i].second == compressedData[cmpDataSize].second)
                compressedData[cmpDataSize].first += vp[i].first;
            else {
                compressedData.push_back(vp[i]);
                cmpDataSize++;
            }
        }

        ll lapCounter = 0;
        ll currentPosition = 0;
        char currentDirection = compressedData[0].second;

        for(int i=0; i<compressedData.size(); i++) {
            distance  = compressedData[i].first;
            direction = compressedData[i].second;

            cout<<distance<<' '<<direction<<endl;

            if(i==0) {
                lapCounter += (distance/l);
                currentPosition = distance%l;
            } else {
                if(distance > currentPosition) {
                    distance -= currentPosition;
                    currentPosition = 0;
                    lapCounter += (distance/l);
                    currentPosition = distance%l;

                } else {
                    currentPosition -= distance;
                }
            }

        }
        cout<<"Case #"<<caseCounter++<<": "<<lapCounter<<endl;
    }

    return 0;
}
