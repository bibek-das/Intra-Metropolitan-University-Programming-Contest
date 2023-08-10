#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e7 + 10;
bool is_prime[N];

void sieve(){
    memset(is_prime, true, sizeof(is_prime));
    for(int p = 2;p * p <= N;p++){
        if(is_prime[p] == true){
            for(int i = p * p;i <= N;i += p){
                is_prime[i] = false;
            }
        }
    }
    is_prime[0] = 0;
    is_prime[1] = 0;
}

void solve(int cs){
    int n, q;
    cin >> n >> q;
    ll arr[n + 1];
    ll pre[n + 1];
    pre[0] = 0;
    for(int i = 1;i <= n;i++){
        cin >> arr[i];
        pre[i] = arr[i] + pre[i - 1];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        ll sum = pre[r] - pre[l - 1];
        if(is_prime[sum]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int tc = 1, cs = 1;
    cin >> tc;
    while(tc--){
        solve(cs++);
    }
}