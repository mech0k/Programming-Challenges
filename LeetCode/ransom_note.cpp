#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(ransomNote.size() == 0 || ransomNote.size() >= magazine.size()) return false;
    int track[26] = {};
    for(auto i : magazine){
        track[i-'a']++;
    }
    for(auto i : ransomNote){
        if(--track[i-'a'] < 0) return false;
    }
    return true;
}

// bool canConstruct(string ransomNote, string magazine){
//     std::ios_base::sync_with_stdio(false);
//     unordered_map<char, int> track;
//     for(auto i: magazine){
//         track[i] += 1;
//     }
//     for(auto i: ransomNote){
//         track[i] -= 1;
//         if(track[i] < 0) return false;
//     }
//     return true;
// }

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

