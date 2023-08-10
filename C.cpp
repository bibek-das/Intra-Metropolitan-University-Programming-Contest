#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 10;

ll cost[N][6];
ll dp[N][6];


void solve(int cs){
    int n;
    cin >> n;
    for(int i = 1;i <= 5;i++) cost[0][i] = -1;
    for(int j = 1;j <= 5;j++){
        for(int i = 1;i <= n;i++){
            cin >> cost[i][j];
        }
    }
    ll ans = -1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= 5;j++){
            ll mx = -1;
            for(int k = 1;k <= 5;k++){
                if(k != j && cost[i - 1][k] < cost[i][j]){ 
                    mx = max(mx, dp[i - 1][k]);
                }
            }
            if(mx == -1) dp[i][j] = -1;
            else dp[i][j] = cost[i][j] + mx;
            if(i == n) ans = max(ans, dp[i][j]);
        }
    }
    cout << "Case #" << cs << ": ";
    if(~ans) cout << ans << endl;
    else cout << "Impossible!" << endl;
}


int main() {
    int tc = 1, cs = 1;
    cin >> tc;
    while(tc--){
         solve(cs++);
    }
}