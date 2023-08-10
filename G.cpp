#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
ll bit[N];

ll get(int idx){
    ll res = 0;
    while(idx){
        res += bit[idx];
        idx -= (idx & -idx);
    }
    return res;
}

void update(int idx, ll val, int n){
    while(idx <= n){
        bit[idx] += val;
        idx += (idx & -idx);
    }
}

void solve(int cs){
    int n, q;
    cin >> n >> q;
    ll arr[n + 1];
    for(int i = 1;i <= n;i++){
        cin >> arr[i];
        update(i, arr[i], n);
    }
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int idx;
            ll val;
            cin >> idx >> val;
            ll d = val - arr[idx];
            update(idx, d, n);
            arr[idx] = val;
        }
        else{
            int l, r;
            ll sum;
            cin >> l >> r >> sum;
            ll correct = get(r) - get(l - 1);
            if(correct == sum){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    for(int i = 0;i <= n;i++){
        bit[i] = 0;
    }

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