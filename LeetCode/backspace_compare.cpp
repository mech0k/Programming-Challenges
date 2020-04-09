#include <bits/stdc++.h>
using namespace std;

vector<char> clear_string(string S){
    vector<char> s;
    int c = 0;
    for(int i = S.length() - 1; i >= 0; i--){
        if(S[i] == '#'){
            c++;
        }else{
            if(c > 0){
                c--;
            }else{
                s.push_back(S[i]);
            }
        }
    }
    return s;
}

bool backspaceCompare(string S, string T){
    vector<char> s = clear_string(S);
    vector<char> t = clear_string(T);
    if(s.size() != t.size()){
        return 0;
    }else{
        for(size_t i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    string S = "a##c";
    string T = "#a#c";
    cout << backspaceCompare(S, T) << endl;

    return 0;
}

