#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#define ll long long
#define inf 0x3f3f3f3f
using namespace std;
const int maxn = 3e3+5;
const int mod = 1e9+7;
const double pi = acos(-1);
const double eps = 1e-8;
char s[maxn];
ll c;
ll qpow(ll a,ll b)
{
	ll res = 1;
	while(b)
	{
		if(b&1) res = (res*a)%mod;
		a = a*a%mod;
		b >>= 1;
	}
	return res;
}
int main()
{
	ll ans = 1;
	scanf("%s%lld",s,&c);
	int len = strlen(s);
	for(int i = len-1;i >= 0;i--)
		if(s[i] == '1'){
			cout<<
			ans = (qpow(1+c,len-i-1)+c*ans%mod)%mod;
        }
	printf("%lld\n",ans);
	return 0;
}
