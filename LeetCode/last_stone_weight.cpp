#include <bits/stdc++.h>
using namespace std;

// priority queue and heap are also viable options
int lastStoneWeight(vector<int> & st){
    vector<int> stones = st;
    while(stones.size() > 1){
        sort(stones.begin(), stones.end());
        int y = stones.back();
        stones.pop_back();
        int x = stones.back();
        stones.pop_back();

        // if I use this if leetcode heap overflows - idk why
        //if(x == y) continue;
        
        stones.push_back(y - x);
    }
    return stones.back();
}

int main(){
    std::ios_base::sync_with_stdio(false);

    vector<int> temp = {2,2};
    cout << lastStoneWeight(temp) << endl;
    return 0;
}
