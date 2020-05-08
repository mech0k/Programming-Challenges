#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> & nums){
    int el, c = 0;
    for(auto i : nums){
        if(c == 0)
            el = i;
        el == i ? c++ : c--;
    }
    return el;
}

// int majorityElement(vector<int> & nums){
//     unordered_map<int, int> el;
//     for(auto i : nums){
//         el[i]++;
//     }
//     for(auto i : el){
//         if(i.second > (int)nums.size() / 2){
//             return i.first;
//         }
//     }
//     return 0;
// }

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

