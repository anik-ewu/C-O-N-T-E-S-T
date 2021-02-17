///Approach  : MO
///Complexity: O(Sqrt(N) * N)
///Problem   : Most Frequent Value On Range L-R

#include<bits/stdc++.h>
using namespace std;
#define sz 500005

struct query{
    int l,r,id;
}q[sz];

int len;
int res=0;
int ans[sz],arr[sz];
unordered_map< int , int > fre;


bool cmp(query &a, query &b){
    if(a.l/len!=b.l/len)
        return a.l/len<b.l/len;
    return (a.l/len & 1) ? a.r<b.r : a.r>b.r;///time optimization
}

void add(int pos){
    int a=arr[pos];
    fre[a]++;
    if(fre[a]%2==0){
        res=res^a;
    }
    else if(fre[a]>1){
        res=res^a;
    }
}
void del(int  pos){
    int a=arr[pos];
    fre[a]--;
    if(fre[a]%2==0 && fre[a]){
        res=res^a;
    }
    else if(fre[a]%2==1){
        res=res^a;
    }

}

int main(){

    int n,i,j,m;
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    while(scanf("%d%d",&n, &m)==2){
        len=sqrt(n)+1;///we may need to tune it 447->500
        res=0;
        fre.clear();
        for(i=0; i<n; i++)scanf("%d", &arr[i]);


        for(i=1; i<=m; i++){
            scanf("%d%d",&q[i].l,&q[i].r);
            q[i].id=i;q[i].l--;q[i].r--;
        }
        sort(q+1,q+m+1,cmp);///sort query
        int l=0,  r=-1;
        for(i=1; i<=m; i++){
            while(l>q[i].l)add(--l);
            while(r<q[i].r)add(++r);
            while(l<q[i].l)del(l++);
            while(r>q[i].r)del(r--);
            ans[q[i].id]=res;
        }
        for(i=1; i<=m; i++){
            printf("%d\n",ans[i]);
        }
    }
    return 0;
}

