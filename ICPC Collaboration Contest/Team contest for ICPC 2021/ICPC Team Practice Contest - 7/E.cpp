#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll sz=1000005;
ll arr[sz],mn;
int Check(int j)
{
    int cnt=0;
    if(j==0)
        return 0;
    ll gcd=arr[0];
    for(int i=1;i<j;i++)
    {
        gcd=__gcd(arr[i],gcd);
    }
    for(int i=0;i<j;i++)
    {
        if(arr[i]==gcd)
            cnt++;
    }
    return max(1,(cnt+1)/2);
}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        mn=1e12;
        int j=0;
        for(int i=0;i<n;i++)
        {
            //cout<<"ans "<<ans<<endl;
            ll a;
            cin>>a;
            if(a<=0)
            {
                ans++;
                ans+=Check(j);
                j=0;
                continue;
            }
            arr[j++]=a;
        }
        //cout<<j<<" "<<mn<<endl;
        ans+=Check(j);
        cout<<ans<<endl;
    }
    return 0;
}