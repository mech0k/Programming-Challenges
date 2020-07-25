#include <bits/stdc++.h>
using namespace std;

#define int long long

// based on the tutorial solution
signed main(){
    std::ios_base::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    int arr[2*n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr[n+i] = arr[i];
    }

    int c[2*n+1];
    c[2*n] = 0;
    int d[2*n];
    int sum_days = 0;
    int sum_hugs = 0;
    for(int i = 0; i < 2*n; i++){
        sum_days += arr[i];
        c[i] = sum_days;
        sum_hugs += (arr[i] * (arr[i] + 1)) / 2;
        d[i] = sum_hugs;
    }

    int ans = 0;
    for(int i = 0; i < 2*n; i++){
        if(c[i + 1] >= x){
            int index = upper_bound(c, c + 2*n, c[i] - x) - c;
            int d_diff = d[i] - d[index];
            int c_diff = c[i] - c[index];
            int too = x - c_diff;
            d_diff += ((arr[index] * (arr[index] + 1)) / 2);
            d_diff -= (((arr[index] - too) * (arr[index] - too + 1 )) / 2);
            if(d_diff > ans) ans = d_diff;
        }
    }

    cout << ans << endl;

    return 0;
}
