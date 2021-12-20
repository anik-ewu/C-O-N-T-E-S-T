#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int H, W, a, b, t, n , m,c,d, x1, y1, x2, y2;
    cin>>t;
    while(t--){
        cin>>W>>H;
        cin>>x1>>y1>>x2>>y2;
        cin>>w>>h;


        bool flag=false;
         //up
        int ans=INT_MAX;
         if((y2-y1+h<=H)){
            a=H-y2;
            b=0;
            flag=true;
            if(a<h){
                b=h-a;
             }
             ans=min(ans, b);
             a=y1;
             b=0;
             if(a<h){
                b=h-a;
             }
             ans=min(ans, b);
        }
         if((y2-y1+h<=H)){
            a=H-y2;
            b=0;
            flag=true;
            if(a<h){
                b=h-a;
             }
             ans=min(ans, b);
             a=y1;
             b=0;
             if(a<h){
                b=h-a;
             }
             ans=min(ans, b);
        }




    return 0;
}
