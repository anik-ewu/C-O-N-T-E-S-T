///12-April-2021
///Tags: Segment Tree with lazy update



#include<bits/stdc++.h>
using namespace std;
const int N=1024005;

int L, R;
string s;
int lazy[N*4];

struct st{
    int x, y;
}tree[N*4];

struct st combine(st a, st b){
    return {(a.x+b.x), (a.y+b.y)};
};

void build(int at, int l, int r){

    if(l==r){
        if(s[l-1]=='0')tree[at]={1,0};
        else tree[at]={0,1};
        return;
    }
    int mid=(l+r)/2;
    build(at*2, l, mid);
    build(at*2+1, mid+1, r);
    tree[at]=combine(tree[at*2],tree[at*2+1]);
}

int doflip(int x){
    if(x==1)return 2;
    if(x==2)return 1;
    if(x==3)return 0;
    if(x==0)return 3;
}

void process(int at, int l, int r, int val){
    if(val==1)tree[at]={0,(r-l+1)};
    if(val==2)tree[at]={(r-l+1),0};
    if(val==3)swap(tree[at].x, tree[at].y);
}

void propagate(int at, int l, int r, int val){
    process(at, l, r, val);
    if(l!=r){
        if(val==1|| val==2)
            lazy[at*2]=lazy[at*2+1]=val;
        else{
            lazy[at*2]=doflip(lazy[at*2]);
            lazy[at*2+1]=doflip(lazy[at*2+1]);
        }
    }
    lazy[at]=0;
}

void update(int at , int l, int r, int val){

    if(lazy[at])propagate(at,l,r, lazy[at]);
    if(R<l || r<L)return;
    if(L<=l and r<=R){
        process(at, l, r, val);
        if(l!=r){
            if(val==1|| val==2)
                lazy[at*2]=lazy[at*2+1]=val;
            else{
                lazy[at*2]=doflip(lazy[at*2]);
                lazy[at*2+1]=doflip(lazy[at*2+1]);
            }
        }
        return;
    }
    int mid=(l+r)/2;
    update(at*2, l, mid, val);
    update(at*2+1, mid+1, r, val);
    tree[at]=combine(tree[at*2],tree[at*2+1]);
}

int query(int at, int l, int r){

    if(lazy[at])propagate(at,l,r, lazy[at]);
    if(R<l || r<L)return 0;
    if(L<=l and r<=R)return tree[at].y;
    int mid=(l+r)/2;
    return (query(at*2, l, mid)+query(at*2+1, mid+1, r));
}



int main(){

    char ch;
    string p;
    int t, n, m, q, val;
    //freopen("in.txt", "r", stdin);

    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n;
        s="";
        memset(lazy, 0, sizeof(lazy));
        for(int i=1; i<=n; i++){
            cin>>m>>p;
            while(m--){
                s+=p;///Concatenate string
            }
        }
        n=s.size();
        build(1, 1, n);

        int cs=1;
        cin>>q;
        cout<<"Case "<<tc<<":"<<endl;
        while(q--){
            cin>>ch>>L>>R; L++;R++;

            if(ch=='S'){
                cout<<"Q"<<cs++<<": "<<query(1,1,n)<<endl;
            }
            else{
                if(ch=='F')val=1;
                if(ch=='E')val=2;
                if(ch=='I')val=3;
                update(1,1,n, val);
            }
        }
    }


    return 0;
}
