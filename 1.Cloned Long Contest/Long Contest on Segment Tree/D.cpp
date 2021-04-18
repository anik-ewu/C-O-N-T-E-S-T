///9-April-2021
///Tags: Segment Tree With Lazy Update
///Notes: Fist we need to compress to data to reduce the memory size. Then for each
///Segment update the value by 1 and then finally query for each point to get the result.


#include<bits/stdc++.h>
using namespace std;

#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               sz =700005;

int L, R;
map< int, int > mp;
int tree[4*sz], lazy[4*sz];
int arr[sz], brr[sz], qrr[sz];

int process(int n, int q){
    set< int > st;
    for(int i=1; i<=n; i++)st.insert(arr[i]);
    for(int i=1; i<=n; i++)st.insert(brr[i]);
    for(int i=1; i<=q; i++)st.insert(qrr[i]);

    int val=1;
    for(int i: st){
        mp[i]=val++;
    }
    return st.size();
}

void prop(int at, int l, int r){

    tree[at]+=(lazy[at]*(r-l+1));
    if(l!=r){
        lazy[at*2]+=lazy[at];
        lazy[at*2+1]+=lazy[at];
    }
    lazy[at]=0;
}

void update(int at, int l, int r){
    if(lazy[at])prop(at, l, r);
    if(R<l || r<L)return ;
    if(L<=l and r<=R){
        tree[at]+=(r-l+1);
        if(l!=r){
            lazy[at*2]++;
            lazy[at*2+1]++;
        }
        return ;
    }
    int mid=(l+r)/2;
    update(at*2, l, mid);
    update(at*2+1, mid+1, r);
    tree[at]=tree[at*2]+tree[at*2+1];
}

int query(int at, int l, int r){
    if(lazy[at])prop(at, l, r);
    if(R<l || r<L)return 0;
    if(L<=l and r<=R){
        return tree[at];
    }
    int mid=(l+r)/2;
    return (query(at*2, l, mid)+query(at*2+1, mid+1, r));
}

int main(){

    //Fast;
    read(x);

    int t, n, q;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        scanf("%d%d", &n, &q);
        for(int i=1; i<=n; i++)scanf("%d%d", &arr[i], &brr[i]);
        for(int i=1; i<=q; i++)scanf("%d", &qrr[i]);

        int N=process(n,q)+1;///compress date

        memset(tree, 0, sizeof(tree));
        memset(lazy, 0, sizeof(lazy));
        for(int i=1; i<=n; i++){
            L=mp[arr[i]];
            R=mp[brr[i]];
            update(1, 1, N);
        }

        printf("Case %d:\n",tc);
        for(int i=1; i<=q; i++){
            L=R=mp[qrr[i]];
            printf("%d\n", query(1, 1, n));
        }
    }

    return 0;
}

