#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t=1,cas=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        ll sum=0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a!=0)arr.push_back(a);
            if(a>0)sum+=a;
        }
        n=arr.size();
        cout<<"Case "<<cas++<<": ";
        int i=0,j=n-1;

        while(i<n && arr[i]<0)i++;
        while(j>0&&arr[i]<0)j--;
        int cnt=0;
        bool flag=false;
        for(int k=i; k<=j; k++)
        {
            if(arr[k]<0 && flag==true)
                continue;
            else
                flag=false;
            if(arr[k]<0)
            {
                cnt++;
                flag=true;
            }
        }

        i=0,j=n-1;
        while(i<n&&arr[i]>0)
            i++;
        while(j>=0&&arr[i]>0)
            j--;
        int cnt1=0;
        if(i>0&&j<n-1)
            cnt1++;
        flag=false;
        for(int k=i; k<=j; k++)
        {
            if(arr[k]>0&&flag==true)
                continue;
            else
                flag=false;
            if(arr[k]>0)
            {
                cnt1++;
                flag=true;
            }
        }
        cout<<sum<<" "<<min(cnt,cnt1)<<endl;
        arr.clear();
    }

    return 0;
}
