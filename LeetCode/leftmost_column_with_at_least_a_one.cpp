#include <bits/stdc++.h>
using namespace std;

class BinaryMatrix {
    public:
        int get(int x, int y){return 0;}
        vector<int> dimensions(){return {0,0};}
};

int leftMostColumnWithOne(BinaryMatrix & bm){
    vector<int> dim = bm.dimensions();
    int height = dim[0];
    int width = dim[1];
    int answer = -1;
    int i = 0;
    int j = width-1; 
    while(true){
        if(bm.get(i, j) == 1){
            answer = j;
            if(j == 0) break;
            j--;
        }else{
            if(i == height-1) break;
            i++;
        }
    }
    return answer;
}

int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

