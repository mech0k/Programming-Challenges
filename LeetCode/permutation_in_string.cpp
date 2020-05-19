#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2){
    if(s1.length() > s2.length()) return 0;
    int arr[26] = {0};
    for(char c : s1){
        arr[c-'a'] ++;
    }
    int s_arr[26] = {0};
    for(int i = 0; i < (int)s1.length(); i++){
        s_arr[s2[i]-'a']++;
    }
    for(int i = s1.length(); i <= (int)s2.length(); i++){
        bool is = true;
        for(int j = 0; j < 26; j++){
            if(arr[j] != s_arr[j]){
                is = false;
                continue;
            }
        }
        if(is) return 1;
        if(i == (int)s2.length()) break;
        s_arr[s2[i]-'a']++;
        s_arr[s2[i-s1.length()]-'a']--;
    }
    return 0;
}

int main(){
    std::ios_base::sync_with_stdio(false);

    string a = "horse";
    string b = "ros";
    cout << checkInclusion(b, a) << endl;

    return 0;
}

