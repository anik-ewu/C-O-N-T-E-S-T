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
const int               sz =1e5+5;

int L, R;
int arr[sz];
ll tree[4*sz];
ll tree2[4*sz];

void build_mn(int node , int l, int r){
    if(l==r){
        tree[node]=arr[l];
        return ;
    }
    int left=node*2;
    int right=(node*2)+1;
    int mid=(l+r)/2;
    build_mn(left,l,mid);
    build_mn(right,mid+1,r);
    tree[node]=min(tree[left],tree[right]);
}

ll query_mn(int node , int l , int r){
    if(R<l || L>r)
        return inf;
    if(L<=l and r<=R){
        return tree[node];
    }
    int left=node*2;
    int right=(node*2)+1;
    int mid=(l+r)/2;
    int q1=query_mn(left,l,mid);
    int q2=query_mn(right,mid+1,r);
    return min(q1,q2);
}
void build_mx(int node , int l, int r){
    if(l==r){
        tree2[node]=arr[l];
        return ;
    }
    int left=node*2;
    int right=(node*2)+1;
    int mid=(l+r)/2;
    build_mx(left,l,mid);
    build_mx(right,mid+1,r);
    tree2[node]=max(tree2[left],tree2[right]);
}

ll query_mx(int node , int l , int r){
    if(R<l || L>r)
        return -1;
    if(L<=l and r<=R){
        return tree2[node];
    }
    int left=node*2;
    int right=(node*2)+1;
    int mid=(l+r)/2;
    int q1=query_mx(left,l,mid);
    int q2=query_mx(right,mid+1,r);
    return max(q1,q2);
}

bool check(int mid , int n, int k){

	for(int i=1; i+mid-1<=n; i++){
		L=i;
		R=i+mid-1;
		ll mn=query_mn(1, 1, n);
		ll mx=query_mx(1, 1, n);
		if(mx-mn<=k)return true;
	}
	return false;
}

int bin_src(int n, int k){

	int lo=1;
	int hi=n;

	while(hi-lo>2){

		int mid=(hi+lo)/2;
		if(check(mid, n, k)){
			lo=mid;
		}
		else{
			hi=mid;
		}
	}
	while(lo<n and check(lo+1, n, k))lo++;
	return lo;
}

int main(){
    
    Fast;   
    read(x); write(x);

    int a,b, t, n,m, i,j,k;
    cin>>n>>k;
    for(i=1; i<=n; i++)cin>>arr[i];
    
    build_mn(1,1, n);
    build_mx(1,1, n);
	L=1, R=n;
	int res=bin_src(n,k);
	cout<<res<<endl;


    return 0;
}

