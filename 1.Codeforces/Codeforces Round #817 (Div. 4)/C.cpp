#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map < string, int > mp1;
map < string, int > mp2;
map < string, int > mp3;


int main(){

    string s, p , q;
    stringstream ss;
    int a, b, t=1, n , m;

    cin>>t;
    while(t--){

        mp1.clear();
        mp2.clear();
        mp3.clear();


        cin>>n;
        getchar();
        ss.clear();
        getline(cin,s);
        ss<<s;

        vector<string> vs;
        while(ss>>s) {
            mp1[s]++;
            vs.push_back(s);
        }

        ss.clear();
        getline(cin,s);
        ss<<s;

        vector<string> vp;
        while(ss>>s) {
            mp2[s]++;
            vp.push_back(s);
        }


        ss.clear();
        getline(cin,s);
        ss<<s;

        vector<string> vq;
        while(ss>>s) {
            mp3[s]++;
            vq.push_back(s);
        }

        int player1 = 0;
        int player2 = 0;
        int player3 = 0;
        for(int i=0; i<vs.size(); i++){
            if(mp2[vs[i]] && mp3[vs[i]]) {
                continue;
            }
            else if(mp2[vs[i]] || mp3[vs[i]]) {
                player1++;
            } else {
                player1 += 3;
            }
        }

        for(int i=0; i<vp.size(); i++){
            if(mp1[vp[i]] && mp3[vp[i]]) {
                continue;
            }
            else if(mp1[vp[i]] || mp3[vp[i]]) {
                player2++;
            } else {
                player2 += 3;
            }
        }
        for(int i=0; i<vq.size(); i++){
            if(mp1[vq[i]] && mp2[vq[i]]) {
                continue;
            }
            else if(mp1[vq[i]] || mp2[vq[i]]) {
                player3++;
            } else {
                player3 += 3;
            }
        }

        cout<<player1<<' '<<player2<<' '<<player3<<endl;



    }

    return 0;
}
