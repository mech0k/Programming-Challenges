#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int version){
    return version;
}

int firstBadVersion(int n){
    int s_index = 1, e_index = n, n_index; 
    bool check;
    while(s_index < e_index){
        n_index = s_index + (e_index-s_index) / 2;
        check = isBadVersion(n_index);
        if(check) e_index = n_index;
        else s_index = n_index + 1;
    }
    return e_index;
}

int main(){
    std::ios_base::sync_with_stdio(false);


    return 0;
}

