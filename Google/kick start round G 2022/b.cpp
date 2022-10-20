#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

double calculateDistance(double x1, double y1) {
    return sqrt((x1*x1) + (y1*y1));
}

bool stoneLiesOnHouseArea(double d, double r1, double r2) {
    if (d <= r2 - r1 || d < r1 + r2 || d == r1 + r2) {
        return true;
    }
    return false;
}

int main(){

    Fast;

    int a, b, t=1, n , m, caseCounter = 1;
    double Rs, Rh;
    cin>>t;
    while(t--){
            cin>>Rs>>Rh;

            cin>>n;
            pair< double, double >  redTeamStones[n+2];
            for(int i=1; i<=n; i++) {
                cin>>redTeamStones[i].first;
                cin>>redTeamStones[i].second;
            }

            cin>>m;
            pair< double, double >  yellowTeamStones[m+2];
            for(int i=1; i<=m; i++) {
                cin>>yellowTeamStones[i].first;
                cin>>yellowTeamStones[i].second;
            }

            double closestRedStone = INT_MAX ;
            for(int i=1; i<=n; i++) {
                double distanceFromOrigin = calculateDistance(redTeamStones[i].first, redTeamStones[i].second);
                closestRedStone = min(closestRedStone, distanceFromOrigin);
            }

            double closestYellowStone = INT_MAX;
            for(int i=1; i<=m; i++) {
                double distanceFromOrigin = calculateDistance(yellowTeamStones[i].first, yellowTeamStones[i].second);
                closestYellowStone = min(closestYellowStone, distanceFromOrigin);
            }

            int redTeamPoints =  0;
            for(int i=1; i<=n; i++) {
                double distanceFromOrigin = calculateDistance(redTeamStones[i].first, redTeamStones[i].second);
                if(stoneLiesOnHouseArea(distanceFromOrigin, Rs, Rh) &&
                   distanceFromOrigin < closestYellowStone) {
                    redTeamPoints++;
                }

            }

            int yellowTeamPoints =  0;
            for(int i=1; i<=m; i++) {
               double distanceFromOrigin = calculateDistance(yellowTeamStones[i].first, yellowTeamStones[i].second);
                if(stoneLiesOnHouseArea(distanceFromOrigin, Rs, Rh) &&
                   distanceFromOrigin < closestRedStone) {
                    yellowTeamPoints++;
                }
            }

            cout<<"Case #"<<caseCounter++<<": "<<redTeamPoints<<' '<<yellowTeamPoints<<endl;


    }

    return 0;
}
