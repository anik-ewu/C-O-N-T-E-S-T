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


    int t;
    string s;
    int arr[26];

    cin>>t;
    while(t--){

        cin>>s;
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i<s.size(); i++){

            if(arr[s[i]-'a']) {
                len += 2;
                memset(arr, 0, sizeof(arr));
            } else {
                arr[s[i]-'a'] = 1;
            }
        }

        cout<<s.size()-len<<endl;

    }

    return 0;
}
