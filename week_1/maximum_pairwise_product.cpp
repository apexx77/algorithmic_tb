#include <bits/stdc++.h>
#define ll long long int 
#define endl "\n"

using namespace std;

int main() {
    ll n, temp, ans; vector<ll> v;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> temp;
        v.push_back(temp);
    }sort(v.begin(), v.end());
    ans = v[n-1]*v[n-2];
    cout << ans << endl;
    return 0;
}