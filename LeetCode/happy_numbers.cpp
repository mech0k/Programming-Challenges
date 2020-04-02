#include <cmath>
#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

//bool inSet(int n, std::set<int> &have_seen){
//    return have_seen.find(n) != have_seen.end();
//}

int newSum(int n){
    int sum = 0;
    while(n / 10 != 0){
       sum += pow(n % 10, 2); 
       n /= 10;
    }
    sum += pow(n%10, 2);
    return sum;
}

//bool isHappy(int n){
//    std::set<int> have_seen; 
//    do{
//        have_seen.insert(n); 
//        n = newSum(n);
//    }while(n != 1 && inSet(n, have_seen) != true);
//
//    if(newSum(n) == 1) return true;
//    return false;
//}

bool isHappy(int n){
    int slow = n;
    int fast = newSum(n);
    while(slow != fast){
        slow = newSum(slow);        
        fast = newSum(newSum(fast));
    }
    if(slow == 1) return true;
    return false;
}

int main(){

    int n;
    std::cin >> n;
    std::cout << isHappy(n);
    return 0;
}
