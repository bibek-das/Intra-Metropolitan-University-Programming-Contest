#include<bits/stdc++.h>
using namespace std;
#define dl double
#define ll long long

dl get_radian(dl d){
    return ((3.1416 * d) / 180.0);
}

void solve(int cs){
    dl l, d;
    cin >> l >> d;
    d = get_radian(d);
    cout << "Case " << cs << ": " << fixed << setprecision(6) << sqrtl(2.0 * 9.8 * l * (1.0 - cos(d))) << endl;
}
 
int main(){
    ios_base::sync_with_stdio;cin.tie(0);
    cout.tie(0);
 
    int tc = 1, cs = 1;
    cin >> tc;
    while(tc--){
        solve(cs++);
    }
}