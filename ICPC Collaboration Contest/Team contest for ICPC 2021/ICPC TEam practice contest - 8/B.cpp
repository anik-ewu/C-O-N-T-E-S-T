#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct point
{
    double x;
    double y;
};
double shoelace_formula(point p1,point p2,point p3,point p4)
{
    double sum=(p1.x*p2.y)+(p2.x*p3.y)+(p3.x*p4.y)+(p4.x*p1.y);
    double sub=(p2.x*p1.y)+(p3.x*p2.y)+(p4.x*p3.y)+(p1.x*p4.y);
    return 0.5*fabs(sum-sub);

}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    point p1,p2,p3,p4;
    double cost,ans;
    int t,cas=1;
    cin>>t;
    while(t--)
    {
        cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y;
        cin>>cost;
        double area=shoelace_formula(p1,p2,p3,p4);
        if(cost and area)
        ans=area/cost;
        else
            ans=0.00;
        cout<<"Case #"<<cas++<<": ";
        cout<<setprecision(2)<<fixed<<ans<<endl;
    }

    return 0;
}
