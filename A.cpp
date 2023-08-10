#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll getSum(ll a, ll n){
    return (n * a) + (n * (n - 1));
}

void solve(int cs){
    ll l, r;
    cin >> l >> r;
    ll n = (r / 2) - ((l - 1) / 2);
    if(l % 2 != 0) l++;
    cout << getSum(l, n) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1, cs = 1;
    cin >> tc;
    while(tc--){
        solve(cs++);
    }
}
