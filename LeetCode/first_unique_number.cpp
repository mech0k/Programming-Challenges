#include <bits/stdc++.h>
using namespace std;
class FirstUnique{
    queue<int> un;
    unordered_map<int, int> counts;
    public:

    FirstUnique(vector<int> &nums){
        for(auto i: nums){
            if(++counts[i] == 1){
                un.push(i);
            }
        }
    }

    int showFirstUnique(){
        while(!un.empty() && counts[un.front()] > 1){
            un.pop();
        }
        if(un.empty()) return -1;
        return un.front();
    }

    void add(int value){
        if(++counts[value] == 1){
            un.push(value);
        }
    }
};


int main(){
    std::ios_base::sync_with_stdio(false);
    vector<int> temp = {7,7,7,7,7,7};
    FirstUnique fu(temp);
    cout << fu.showFirstUnique() << endl; // return -1
    fu.add(7);            // the queue is now [7,7,7,7,7,7,7]
    fu.add(3);            // the queue is now [7,7,7,7,7,7,7,3]
    fu.add(3);            // the queue is now [7,7,7,7,7,7,7,3,3]
    fu.add(7);            // the queue is now [7,7,7,7,7,7,7,3,3,7]
    fu.add(17);           // the queue is now [7,7,7,7,7,7,7,3,3,7,17]
    cout << fu.showFirstUnique() << endl; // return 17
    
    return 0;
}

