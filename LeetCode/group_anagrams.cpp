#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs){
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> m;
    for(string &str : strs){
        string temp = str;
        sort(temp.begin(), temp.end());
        m[temp].push_back(str);
    }
    for(auto i: m){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    std::ios_base::sync_with_stdio(false);

    vector<string> temp = {"eat", "tea", "tan", "ate", "nat", "bat"};
    groupAnagrams(temp);

    return 0;
}

