#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
    unsigned int i = 0;
    while(i * i <= (unsigned int)n){
        if(i * i == (unsigned int)n) return 1;
        i++;
    }
    return 0;
}

// tried to do a binary search for the interval of its root
// bool isPerfectSquare(int n){
//     if(n == 1) return 1;
//     int l = (int)(n/2);
//     int i = 0, m = 0, c = 0;
//     while(l > c){
//         while(n > m){
//             i += l;
//             if((double)i > (double)n / i) break;
//             m = i*i;
//         }
//         c++;
//         if(l > c){
//             for(unsigned int j = i-l; j <= (unsigned int)i; j++){
//                 if(j * j == (unsigned int)n) return 1;
//             }
//             return 0;
//         }
//         i -= l;
//         l = (int)(l/2);
//     }
//     return 0;
// }

int main(){
    std::ios_base::sync_with_stdio(false);
    while(true){
        int a;
        cin >> a;
        if(a == 0) {
            cout << true << endl; break;
        }
        cout << isPerfectSquare(a) << endl;
    }

    return 0;
}

