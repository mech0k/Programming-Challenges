#include <bits/stdc++.h>
using namespace std;

// optimal
// Uses the fact: if a < b < c
// res += b - a;
// res += c - b;
// == res += c - a;
int maxProfit(vector<int> & prices){
    if(prices.empty()) return 0;
    int curr_max = 0;
    for(size_t i = 1; i < prices.size(); i++){
        if(prices[i] > prices[i-1]){
            curr_max += prices[i] - prices[i-1];
        }
    }
    return curr_max;
}

// too complicated but still optimal
//int maxProfit(vector<int> & prices){
//    int n = prices.size();
//    if(n == 1) return 0;
//    int curr_max = 0;
//    bool b = false;
//    for(int i = n-1; i >= 0; i--){
//        if(b && i == 0){
//            curr_max -= prices[i];
//            return curr_max;
//        }else if(!b && i == 0){
//            return curr_max;
//        }
//        if(!b && prices[i-1] < prices[i] && i != 0){
//            curr_max += prices[i];
//            b = true;
//        }else if(b && prices[i-1] > prices[i]){
//            curr_max -= prices[i];
//            b = false;
//        }
//    }
//    return curr_max;
//}

int main(){
    std::ios_base::sync_with_stdio(false);

    vector<int> n1 = {7,1,5,3,6,4};
    vector<int> n2 = {1,2,3,4,5,6};
    vector<int> n3 = {1,2};
    // 7
    cout << maxProfit(n1) << endl;
    // 5 
    cout << maxProfit(n2) << endl;
    //// 0
    cout << maxProfit(n3) << endl;

    return 0;
}

