#include <bits/stdc++.h>
using namespace std;

class LRUCache {
        int capacity;
        list<pair<int, int>> l;
        unordered_map<int, list<pair<int, int>>::iterator> um;
    public:
        LRUCache(int capacity) : capacity{capacity}{}

        int get(int key){
            if(um.find(key) == um.end()) return -1;
            l.splice(l.begin(), l, um[key]);
            return um[key]->second;
        }

        void put(int key, int value){
            if (get(key) != -1){
                um[key]->second = value;
                return;
            }
            if ((int)um.size() == capacity){
                int delKey = l.back().first;
                l.pop_back();
                um.erase(delKey);
            }
            l.emplace_front(key, value);
            um[key] = l.begin();
        }
};

int main(){
    std::ios_base::sync_with_stdio(false);

    LRUCache* cache = new LRUCache(2);
    cache->put(1,1);
    cache->put(2,2);
    cout << cache->get(1) << endl;      
    cache->put(3, 3);   
    cout << cache->get(2) << endl;      
    cache->put(4, 4);   
    cout << cache->get(1) << endl;      
    cout << cache->get(3) << endl;      
    cout << cache->get(4) << endl;      
    // 1, -1, -1, 3, 4
    
    return 0;
}
