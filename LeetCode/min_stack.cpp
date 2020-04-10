#include <bits/stdc++.h>
using namespace std;

class MinStack{
    public:
        vector<int> mem;
        int min = INT_MAX;
        MinStack(){
            
        }

        void push(int x){
            if(min > x){
                min = x;
            }
            mem.push_back(x);
        }

        void pop(){
            if(min == mem.back()){
                mem.pop_back();
                min = INT_MAX;
                for(auto &i : mem){
                   if(i < min){
                       min = i;
                   }
                }
            }else{
                mem.pop_back();
            }
        }

        int top(){
            return mem.back();
        }

        int getMin(){
            if(min == INT_MAX){
                return INT_MAX;
            }
            return min;
        }
};


int main(){
    std::ios_base::sync_with_stdio(false);

    return 0;
}

