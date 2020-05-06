#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h[26] = {0};

    for(auto i:s)
        h[i-'a']++;
    for(int i=0;i<(int)s.size();i++)
        if(h[s[i]-'a'] == 1) return i;
    return -1;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    string s_0 = "itwqbtcdprfsuprkrjkausiterybzncbmdvkgljxuekizvaivszowqtmrttiihervpncztuoljftlxybpgwnjb";
    string s_1 = "azab";
    // 61
    cout << firstUniqChar(s_0) << endl;
    // 1
    cout << firstUniqChar(s_1) << endl;

    return 0;
}

