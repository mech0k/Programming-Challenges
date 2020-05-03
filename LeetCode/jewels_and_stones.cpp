#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string J, string S){
    unordered_set<char> jewels;
    for(auto j : J){
        jewels.insert(j);
    }
    int count = 0;
    for(auto s : S){
        if(jewels.find(s) != jewels.end()){
            count++;
        }
    }
    return count;
}

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

