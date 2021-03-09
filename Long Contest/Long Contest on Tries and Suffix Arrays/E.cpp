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

int sz;
int cum[N];
int freq[N*32];
int trie[N*32][2];

void init(){
	sz=1;
	memset(freq, 0, sizeof(freq));
	memset(trie, -1, sizeof(trie));
}

void insert(string s){
	int n=s.size();
	int curr=1, next;
	for(int i=0; i<n; i++){
		freq[curr]++;
		next=trie[curr][s[i]-'0'];
		if(next==-1){
			trie[curr][s[i]-'0']=++sz;
		}
		curr=trie[curr][s[i]-'0'];
	}
	freq[curr]++;
}

ll query(string s, int k){
	int res=0;
	int n=s.size();
	int curr=1, next;
	for(int i=0; i<n; i++){
		int on=((k>>(32-(i+1)))&1);
		if(on){
			if(s[i]=='1'){
				res+=freq[trie[curr][1]];
			}
			next=trie[curr][0];	
			if(next==-1)
				return res;
			curr=next;
		}
		else{
			if(s[i]=='0'){
				res+=freq[trie[curr][0]];
			}
			next=trie[curr][1];
			curr=next;
		}
	}
	return res;
}

int main(){

	freopen("in.txt","r",stdin);
	freopen("out.txt","w", stdout);

	
	int T, n, k, a;
	cin>>T;
	while(T--){
		
		init();
		cin>>n>>k;
		for(int i=1; i<=n; i++){
			cin>>a;
			cum[i]=cum[i-1]^a;
		}

		///building trie tree using the cum xor array
		string s;
		bitset< 32 > x;
		for(int i=1; i<=n; i++){
			x=cum[i];
			s=x.to_string();
			insert(s);
		}

		ll res=0;
		for(int i=1; i<=n; i++){
			x=cum[i];
			s=x.to_string();
			res+=query(s,k);
		}

		cout<<res<<endl;

	}
	return 0;
}