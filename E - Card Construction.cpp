#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll cards(ll h) {
    return (3*h*h + h)/2;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int count =0;
        while(n>=2) {
            ll l=1, r=2e9, h=0;
            while(l<=r) {
                ll mid = (l+r)/2;
                ll c = cards(mid);
                if (c <= n) {
                    h = mid;
                    l = mid +1;
                } else {
                    r = mid -1;
                }
            }
            if(h==0) break;
            count++;
            n -= cards(h);
        }
        cout << count << '\n';
    }
    return 0;
}