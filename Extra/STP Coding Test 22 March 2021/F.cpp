#include<bits/stdc++.h>
using namespace std;
typedef long            long ll;
#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll                inf = 1e9;
const int               mod=1e9+7;
const int               sz =2e5+5;

ll arr[sz];

int solve(int n, ll len){

	int j=1;
	int cnt=0;
	ll sum=0;

	for(int i=1; i<=n; i++){
		sum+=arr[i];
		if(sum<len)continue;
		if(sum==len){
			cnt++;
			continue;
		}
		if(sum>len){
			while(sum>len)sum-=arr[j++];
		}
		if(sum==len)cnt++;
	}
	return cnt;
}

int main(){
    
    Fast;   
    read(x); write(x);

    ll len;
    int a,b, t, n,m, i,j,k;
    cin>>n>>k;
    for(i=1; i<=n; i++)cin>>arr[i];

	while(k--){
		cin>>len;
		cout<<solve(n, len)<<endl;
	}    	
    


    return 0;
}

