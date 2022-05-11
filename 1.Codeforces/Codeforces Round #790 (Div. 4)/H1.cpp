#include<bits/stdc++.h>
using namespace std;
#define sz 1005

int L,R;
int arr[sz];
vector < int > v[4*sz];

map < int , int > mp;


void build(int at, int l, int r){

    if(l==r){
        v[at].push_back(arr[l]);
        return;
    }
    int mid=(l+r)/2;
    build(at*2,l,mid);
    build(at*2+1,mid+1,r);
    merge(v[at*2].begin(),v[at*2].end(),v[at*2+1].begin(),v[at*2+1].end(),back_inserter(v[at]));
}

void Clear(int at, int l, int r){

    if(l==r){
        v[at].clear();
        return;
    }
    int mid=(l+r)/2;
    Clear(at*2,l,mid);
    Clear(at*2+1,mid+1,r);
    v[at*2].clear();
    v[at*2+1].clear();
}

int query(int at, int l, int r, int k){

    if(R<l || r<L )return 0;
    if(L<=l && r<=R){
        return v[at].size()-(upper_bound(v[at].begin(),v[at].end(),k)-v[at].begin());
    }
    int mid=(l+r)/2;
    return (query(at*2,l,mid,k)+query(at*2+1,mid+1,r,k));
}

int main(){

    int i,n,q,k, t;
    scanf("%d",&t);
    while(t--) {

        scanf("%d",&n);
        for(i=1; i<=n; i++){
            scanf("%d",&arr[i]);
        }
        mp.clear();
//        for(int i = 0; i<sz*4; i++)v[i].clear();
        Clear(1,1,sz);
        build(1,1,n);

        long long sum = 0;
        mp[arr[1]]++;
        for(int i = 2; i<=n; i++){
            L = 1;
            R = i;
            k = arr[i];
            sum += query(1,1,n,k);
            sum += mp[arr[i]];
            mp[arr[i]]++;
        }
        printf("%lld\n", sum);
    }


   return 0;
}
