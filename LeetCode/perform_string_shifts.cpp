#include <bits/stdc++.h>
using namespace std;

string stringShift(string s, vector<vector<int>> & shift){
    int move = 0;
    int length = s.length();
    for(auto &i: shift){
        // move += (i[0] * 2 - 1) * i[1];
        i[0] == 0 ? move -= i[1] : move += i[1];
    }
    move %= length;
    if(move < 0){
        return s.substr(-move) + s.substr(0,-move);
    }
    return s.substr(length-move) + s.substr(0,length-move);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    string s = "wpdhhcj";
    vector<vector<int>> temp = {{0,7},{1,7},{1,0},{1,3},{0,3},{0,6},{1,2}};
    // hcjwpdh
    cout << stringShift(s, temp) << endl;
    return 0;
}

