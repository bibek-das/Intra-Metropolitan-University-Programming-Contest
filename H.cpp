#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int cs){
    ll n;
    cin >> n;
    cout << (n * (n + 1)) / 2 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1, cs = 1;
    // cin >> tc;
    while(tc--){
        solve(cs++);
    }
}