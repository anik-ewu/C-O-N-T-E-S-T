/*Algo: Trie Tree
Date: 5-03-2021
Idea:
Make a cumilatitive xor of the array elements in reversed order and 
push in trie tree. To find the answer trie maximum xor or the values
of cumilative xor in (1-N)order.
Special: Also check the max(cum[i], cum_rev[i]) to get max. bingo:)*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;

int sz=1;
ll arr[N];
ll cum[N];
ll cum_rev[N];
int trie[N*66][2];

ll  power(int i){
	ll n=1;
	while(i--){
		n=n*1LL*2;
	}
	return n;
}

void insert(string s){
	int n=s.size();
	int curr=1, next;
	for(int i=0; i<n; i++){
		next=trie[curr][s[i]-'0'];
		if(next==-1){
			trie[curr][s[i]-'0']=++sz;
		}
		curr=trie[curr][s[i]-'0'];
	}
}

string query(string s){
	int n=s.size();
	int curr=1, next;
	for(int i=0; i<n; i++){
		next=trie[curr][s[i]-'0'];
		if(next==-1){
			if(s[i]=='0')s[i]='1';
			else s[i]='0';
		}
		curr=trie[curr][s[i]-'0'];
	}
	return s;
}

int main(){

	freopen("in.txt","r",stdin);
	freopen("out.txt","w", stdout);

	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>arr[i];
		cum[i]=cum[i-1]^arr[i];
	}

	int j=1;
	for(int i=n; i>=1; i--){
		cum_rev[j]=cum_rev[j-1]^arr[i];
		j++;
	}

	///building trie tree using the revarsed cum xor array
	string s;
	bitset< 64 > x;
	memset(trie, -1, sizeof(trie));
	for(int i=0; i<=n; i++){
		x=cum_rev[i];
		s=x.to_string();
		insert(s);
	}

	ll res=0;
	for(int i=1; i<=n; i++){
		x=cum[i];
		s=x.to_string();
		for(int j=0; j<64; j++){
			if(s[j]=='0')s[j]='1';
			else s[j]='0';
		}
		s=query(s);

		ll num=0;
		for(int j=0; j<64; j++){
			if(s[j]=='1'){
				num+=power(64-(j+1));
			}
		}
		ll temp=cum[i]^num;
		res=max(res, temp);
		res=max(res, cum[i]);
		res=max(res, cum_rev[i]);
	}

	cout<<res<<endl;

	return 0;
}