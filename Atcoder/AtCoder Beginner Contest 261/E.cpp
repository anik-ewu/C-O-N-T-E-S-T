#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

vector< ll > And;
vector< int > andIndex;

vector< ll > Or;
vector< int > orIndex;

vector< ll > Xor;
vector< int > xorIndex;


int main(){

    Fast;

    ll AND = 0, OR = 0, XOR = 0;
    ll a, b, t=1, n , X;
    cin>>n>>X;

    for(int i = 1 ; i <= n; i++) {
        cin>>a>>b;
        if(a == 1) {
            if(andIndex.size() == 0)
                AND = b;
            else
                AND = AND & b;

            And.push_back(AND);
            andIndex.push_back(i);
        } else if(a == 2) {
            OR = OR | b;
            Or.push_back(OR);
            orIndex.push_back(i);
        } else {
            XOR = XOR ^ b;
            Xor.push_back(XOR);
            xorIndex.push_back(i);
        }

    }

    int index = 0;
    int y = X;
    for(int i=1; i<=n; i++) {

        if(andIndex.size()) {
            int indexAnd = lower_bound(andIndex.begin(), andIndex.end(), i) - andIndex.begin();

            if(indexAnd == andIndex.size()) {
                indexAnd--;
            }

            if(indexAnd == 0) {
                if(andIndex[0]<=i) {
                    X = X & And[indexAnd];
                }
            } else {
                X = X & And[indexAnd];
            }

        }

        if(orIndex.size()) {
            int indexOr = lower_bound(orIndex.begin(), orIndex.end(), i) - orIndex.begin();

            if(indexOr == orIndex.size()) {
                indexOr--;
            }

            if(indexOr == 0) {
                if(orIndex[0]<=i) {
                    X = X | Or[indexOr];
                }
            } else {
                X = X | Or[indexOr];
            }

        }

        if(xorIndex.size()) {
            int indexXor = lower_bound(xorIndex.begin(), xorIndex.end(), i) - xorIndex.begin();

            if(indexXor == xorIndex.size()) {
                indexXor--;
            }

            if(indexXor == 0) {
                if(xorIndex[0]<=i) {
                    X = X ^ Xor[indexXor];
                }
            } else {
                X = X ^ Xor[indexXor];
            }

        }

        cout<<X<<endl;
    }


    return 0;
}
