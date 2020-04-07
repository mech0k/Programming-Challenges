#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

string order(string str){
    sort(str.begin(), str.end()); 
    return str;
}

vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> words;
    for(size_t i = 0; i < strs.size(); i++){
        string temp = order(strs[i]);
        auto g = words.find(temp);
        if(g != words.end()){
            words.at(temp).push_back(strs[i]);
        }else{
            pair<string, vector<string>> t;
            t.first = temp;
            vector<string> te;
            te.push_back(strs[i]);
            t.second = te;
            words.insert(t);
        }

    }

    vector<vector<string>> ans;

    for(auto it = words.begin(); it != words.end(); ++it){
        vector<string> temp_v;
        for(auto &i: it->second){
            temp_v.push_back(i);
        }
        ans.push_back(temp_v);
    }

    return ans;
    //cout << endl;
    //for(auto it = words.begin(); it != words.end(); ++it){
    //    cout << " " << it->first << ": ";
    //    for(auto &i: it->second){
    //        cout << i << " ";
    //    }
    //    cout << endl;
    //}
}

int main(){
    std::ios_base::sync_with_stdio(false);

    vector<string> temp = {"eat", "tea", "tan", "ate", "nat", "bat"};
    groupAnagrams(temp);

    return 0;
}

