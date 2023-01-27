#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main()
{

    int a, b, t=1, n, m;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        int arr[n+2][m+2];

        int totalOne = 0;

        for(int i=1; i<=n; i++)
        {
            int countOne  =0;
            for(int j=1; j<=m; j++)
            {
                cin>>arr[i][j];
                countOne += arr[i][j];
            }
            totalOne += countOne;
            arr[i][m+1] = countOne;
        }

        if(totalOne%n != 0)
        {
            cout<<-1<<endl;
            continue;
        }

        int div = totalOne/n;
        vector<pair<int, pair<int, int> > > vp;

        for(int i=1; i<=n; i++)
        {
            if(arr[i][m+1] > div)
            {
                int del = arr[i][m+1] - div;
                for(int j=1; j<=m && del; j++)
                {
                    if(arr[i][j] == 1)
                    {
                        bool flag = false;
                        int x = j;
                        while(x>=1)
                        {
                            if(arr[x][j] == 0 and arr[x][m+1] < div)
                            {
                                arr[x][j] = 1;
                                arr[x][m+1]++;
                                arr[i][m+1]--;
                                arr[i][j]=0;
                                flag = true;
                                vp.push_back({i, {x, j}});
                                break;
                            }
                            x--;
                        }
                        if(!flag)
                        {
                            x = j;
                            while(x<=n)
                            {
                                if(arr[x][j] == 0 and arr[x][m+1] < div)
                                {
                                    arr[x][j] = 1;
                                    arr[x][m+1]++;
                                    arr[i][m+1]--;
                                    arr[i][j]=0;
                                    flag = true;
                                    vp.push_back({i, {x, j}});
                                    break;
                                }
                                x++;
                            }
                        }
                    }
                }
            }
        }

        bool flag = true;
        for(int i=1; i<=n; i++) {
            if(arr[i][m+1] != div) {
                flag = false;
            }
        }
        if(!flag) {
            cout<<-1<<endl;
        }
        else {
            cout<<vp.size()<<endl;
            for(int i=0; i<vp.size(); i++) {
                cout<<vp[i].first<<' '<<vp[i].second.first<<' '<<vp[i].second.second<<endl;
            }
        }
    }

    return 0;
}
