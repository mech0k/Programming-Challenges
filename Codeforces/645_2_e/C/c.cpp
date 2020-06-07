#include <bits/stdc++.h>
using namespace std;

void solve(){

    unsigned long long x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    cout << (y1 - y0) * (x1 - x0) + 1 << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

