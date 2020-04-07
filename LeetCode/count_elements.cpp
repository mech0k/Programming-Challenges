#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int> & arr){
    const int max_l = 1002;
    int a[max_l];
    for(int i = 0; i < max_l; i++){
        a[i] = 0;
    }
    for(int &i: arr){
        a[i] = 1;
    }
    int count = 0;
    for(int &i: arr){
        if(a[i+1] == 1){
            count++;
        }
    }
    return count;
}

int main(){
    std::ios_base::sync_with_stdio(false);

    // 2
    vector<int> test_0 = {1,2,3};
    // 0
    vector<int> test_1 = {1,1,3,3,5,5,7,7};
    // 3
    vector<int> test_2 = {1,3,2,3,5,0};
    // 2
    vector<int> test_3 = {1,1,2,2};
    cout << countElements(test_0) << endl;
    cout << countElements(test_1) << endl;
    cout << countElements(test_2) << endl;
    cout << countElements(test_3) << endl;
    return 0;
}

