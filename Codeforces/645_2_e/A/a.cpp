#include <bits/stdc++.h>
using namespace std;

int main(){
    //std::ios_base::sync_with_stdio(false);
    std::ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
       int n, m;
       cin >> n >> m;
       cout << int(n*m/2) + ((n*m) % 2) << endl;
    }

    return 0;
}

