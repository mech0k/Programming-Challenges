#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> &arr){
    sort(arr.begin(), arr.end());
    int c = 1;
    int curr_c = 0;
    for(auto i: arr){
        if(i <= c){
            c++;
        }else{
            curr_c++;
            if(i <= c + curr_c-1){
                c += curr_c;
                curr_c = 0;
            }
        }
    }
    cout << c << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    vector<int> arr;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        solve(n, arr);
        arr.clear();
    }
    return 0;
}

