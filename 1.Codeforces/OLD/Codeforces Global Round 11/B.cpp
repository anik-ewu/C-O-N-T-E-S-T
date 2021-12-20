#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

string s;

priority_queue< pair < int , pair< int, int > > > pq;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>k>>s;

        ///no W
        bool ok=false;
        for(i=0; i<n; i++){
            if(s[i]=='W'){
                ok=true;
                break;
            }
        }
        if(!ok){
            if(k){
                k=(k*2)-1;
            }
            cout<<k<<endl;
            continue;
        }

        ///middle
        j=0;
        while(j<n and s[j]=='L')j++;
        int cnt=0;
        for(i=j; i<n; i++){
            if(s[i]=='L')cnt++;
            if(s[i]=='W' && cnt){
                pq.push({-cnt,{i-cnt,i-1}});
                cnt=0;
            }
        }

        while(!pq.empty() && k){
            int l=pq.top().second.first;
            int r=pq.top().second.second;
            cout<<l<< ' '<<r<<endl;
            while(l<=r && k)s[l]='W',k--,l++;

            ///cout<<l<<' '<<r<<endl;

            pq.pop();
        }
        while(!pq.empty())pq.pop();///clearing

        ///first
        i=j-1;
        while(i>=0 && k)s[i]='W',k--,i--;

        ///last
        j=n-1;
        while(j>=0 and s[j]=='L')j--;
        i=j+1;
        while(i<n && k)s[i]='W',i++,k--;

       bool win=false;
       int tot=(s[0]=='W');
       for(i=1; i<n; i++){
        if(s[i]=='W' && s[i-1]=='W')tot+=2;
        else if(s[i]=='W')tot++;
       }
       cout<<tot<<endl;
    }

    return 0;
}

