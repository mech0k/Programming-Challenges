#include <bits/stdc++.h>
using namespace std;

int findComplement(int num){
    return ~num & (INT_MAX >> 31-(int)log2(num));
}

// int findComplement(int num) {
//     int res = 0, pos = 0;
//     while(num>0){
//         if( (num&1) == 0)
//             res = res | (1<<pos);
//         pos++;
//         num = num >> 1;
//     }
//     return res;
// }

int main(){
    std::ios_base::sync_with_stdio(false);
    // 2
    cout << findComplement(5) << endl;
    return 0;
}

