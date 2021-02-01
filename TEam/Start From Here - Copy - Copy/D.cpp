#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<pair<int,int> >  vec,vec1;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    getline(cin, s);
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
                vec.push_back({j+1,i+1});
            }
        }
    }
    //cout<<s<<endl;
    for(int i=vec.size()-1;i>=0;i--)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    return 0;
}
