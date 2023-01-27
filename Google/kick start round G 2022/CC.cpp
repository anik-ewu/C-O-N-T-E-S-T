#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define sz 200005
#define pii pair < ll, ll >
ll arr[sz],L,R;
pair< int , int > tree[sz*4];

pii combine(pii a,pii b){
    if(a.first>b.first) return a;
    if(b.first>a.first) return b;
    return make_pair(a.first,a.second+b.second);
}

void build(int node, int l, int r){

    if(l==r){
        tree[node]=make_pair(arr[l],1);
        return ;
    }

    int mid=(l+r)/2;

    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    tree[node]=combine(tree[node*2],tree[node*2+1]);
}

pii get_max(int node, int l, int r){

    if(R<l || L>r)
    return {-1,0};
    if(L<=l and r<=R){
        return tree[node];
    }
    int mid=(l+r)/2;
    return combine(get_max(node*2,l,mid),get_max(node*2+1,mid+1,r));
}

int main(){

    int n,i,j,l,r,q,key,val,pos;
    cin>>n;

    ll cumSum = 0;
    int brr[n+5];
    for(i=1; i<=n; i++) {
        cin>>brr[i];
        cumSum += brr[i];
        arr[i] = cumSum;
    }


    build(1,1,n);
    pii ans;
    for(int i=1; i<=n; i++) {
        L = i;
        R = n;
        ans=get_max(1,1,n);
        cout<<ans.first<<' '<<ans.second<<endl;
    }
  return 0;
}
/*
INPUT :
10
1 2 2 3 3 3 4 4 4 4
1 1 10
2 6 4
1 1 10

OUTPUT:
4 4
4 5
*/
