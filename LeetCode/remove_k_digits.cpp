#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k){
    if((int)num.length() == k) return "0";
    vector<char> s;
    for(char c : num){
        while(k && !s.empty() && int(s.back())>int(c)){
            s.pop_back();
            k--;
        } 
        s.push_back(c);
    }
    if(k){
        while(k--){
            s.pop_back();
        }
    }
    int index = 0;
    while(s.at(index) == '0' && index < (int)s.size()-1){
        index++;
    }
    num = "";
    while(index < (int)s.size()){
        num.push_back(s[index]);
        index++;
    }
    return num;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    string n = "1432219";
    int k = 3;
    // 1219
    cout << removeKdigits(n, k) << endl;

    return 0;
}

