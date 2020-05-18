#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p){
    if(s.length() < p.length()) return {};
    vector<int> ans;
    int a[26] = {0};
    int b[26] = {0};
    for(char c : p){
        a[c-'a']++;
    }
    int p_l = p.length();
    for(int i = 0; i <= (int)s.length(); i++){
        if(i >= p_l){
            bool t = true;
            for(int j = 0; j < 26; j++){
                if(a[j] != b[j]) t = false;
            }
            if(t) ans.push_back(i - p_l);

            if(i >= (int)s.length()) break;

            b[s[i - p_l] - 'a']--; 
            b[s[i] - 'a']++;
        }else{
            b[s[i] - 'a']++;
        }
    }
    return ans;
}

void print_v(vector<int> i){
    for(int j = 0; j < (int)i.size(); j++){
        cout << i[j] << " ";
    }
    cout << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    string s = "cbaebabacd";
    string p = "abc";

    print_v(findAnagrams(s, p));
    s = "abab";
    p = "ab";
    print_v(findAnagrams(s,p));

    return 0;
}
