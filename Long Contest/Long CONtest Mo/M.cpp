///Date     : 19-09-2020
///Approach : Sqrt decomposition

#include<bits/stdc++.h>
using namespace std;

#define sz 100005
int len;
int arr[sz];
int block[320][sz];
deque< int > g[320];

int query(int l, int r, int k){
    int cnt=0;
    int cl=l/len;
    int cr=r/len;
    if(cl==cr){
         for(int i=(l%len); i<=(r%len); i++){
            if(g[cl][i]==k)cnt++;
         }
    }
    else{
         for(int i=(l%len); i<g[cl].size(); i++){
            if(g[cl][i]==k)cnt++;
         }
        for(int i=cl+1; i<cr; i++){
            cnt+=block[i][k];
        }
        for(int i=0; i<=(r%len); i++){
            if(g[cr][i]==k)cnt++;
        }
    }
    return cnt;
}

void update(int l, int r){

    int cl=l/len;
    int cr=r/len;
    int val=g[cr][r%len];

    g[cr].erase(g[cr].begin()+(r%len));
    block[cr][val]--;

    g[cl].insert(g[cl].begin()+(l%len), val);
    block[cl][val]++;

    while(cl<cr){
        int val=g[cl].back();
        g[cl].pop_back();
        block[cl][val]--;

        g[++cl].push_front(val);
        block[cl][val]++;
    }
}

int main(){

    int n,i;
    scanf("%d",&n);
    len=sqrt(n)+1;
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        block[i/len][arr[i]]++;
        g[i/len].push_back(arr[i]);
    }

    int m,t,l,r,k, lastans=0;
    scanf("%d",&m);

    while(m--){
        scanf("%d%d%d",&t,&l,&r);
        l=((l+lastans-1)%n)+1;
        r=((r+lastans-1)%n)+1;
        if(l>r)swap(l,r);
        l--;r--;///making o based

        if(t==2){
            scanf("%d",&k);
            k=((k+lastans-1)%n)+1;
            lastans=query(l,r,k);
            printf("%d\n",lastans);
        }
        else{
            update(l,r);
        }
    }
    return 0;

}
