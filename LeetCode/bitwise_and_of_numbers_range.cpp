#include <bits/stdc++.h>
using namespace std;


int rangeBitwiseAnd(int m, int n){
    int count = 0;
    while(m != n){
        m >>=1;
        n >>=1;
        count ++;
    }
    return m << count;
}

//int rangeBitwiseAnd(int m, int n){
//    while(m < n){
//        n -= (n & -n);
//    }
//    return n;
//}

//int power_base(int x){
//    int count = 0;
//    while(x != 0){
//        x /= 2;
//        count ++;
//    }
//    return count;
//}

//int rangeBitwiseAnd(int m, int n){
//    if(power_base(m) != power_base(n)) return 0;
//    int ans = m;
//    for(int i = 1; i <= n-m; i++){
//        ans &= m+i; 
//    }
//    return ans;
//}

int main(){
    std::ios_base::sync_with_stdio(false);
    // 4
    cout << rangeBitwiseAnd(5,7) << endl;
    // 0
    cout << rangeBitwiseAnd(0,14) << endl;
    // 0
    cout << rangeBitwiseAnd(0,1) << endl;
    // 0
    cout << rangeBitwiseAnd(200000,2147483647) << endl;
    // 8
    cout << rangeBitwiseAnd(9,13) << endl;

    return 0;
}

