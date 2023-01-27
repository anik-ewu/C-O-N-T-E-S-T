#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map<int, vector<vector<int> > > hashTable;

void fourNumSum(vector<int>&array, int targetSum) {
    int totalNumbers = array.size();
    vector< vector<int> >qudarples;

    for(int i=0; i<totalNumbers; i++) {
        for(int j=i+1; j<totalNumbers; j++) {
            int remaining = targetSum - (array[i] + array[j]);

            if(hashTable.find(remaining) != hashTable.end()) {
                for(auto pairs: hashTable[remaining]) {
                    vector<int>qudarple {array[i], array[j]};
                    for(int num: pairs) {
                            qudarple.push_back(num);
                    }
                    qudarples.push_back(qudarple);
                }
            }
        }
        for(int j=0; j<i; j++) {
            vector<int> makePair;
            makePair.push_back(array[j]);
            makePair.push_back(array[i]);
            int pairSum = array[i] + array[j];

            hashTable[pairSum].push_back(makePair);
        }
    }
    for(auto x: qudarples) {
        for(auto y: x) {
            cout<<y<<' ';
        }
        cout<<endl;
    }
}

int main(){

    vector<int>data{7, 6, 4, -1, 1, 2};
    fourNumSum(data, 16);

    return 0;
}
