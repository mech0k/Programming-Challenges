#include <bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>> & c){
    double m = (double)(c[1][1] - c[0][1]) / (double)(c[1][0] - c[0][0]);
    double b = c[0][1] - m * c[0][0];
    for(auto i : c)
        if(i[1] != m * i[0] + b) return false;
    return true;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    return 0;
}

