#include <iostream>
#include <unordered_map>

int length_of_longest_substring(std::string str);
int length_of_longest_substring_fast(std::string str);

int main(){
    std::string line; 
    while(getline(std::cin, line)){
        std::cout << length_of_longest_substring_fast(line) << std::endl;   
    }
    return 0;
}

int length_of_longest_substring_fast(std::string str){
    std::unordered_map<char, int> l_umap;
    int g_max = 0;
    int l_max = 0;
    for(int i = 0; i < (int)str.size(); i++){
        if(l_umap[str[i]] != 0){
            i = l_umap[str[i]]-1;
            l_umap.clear();
            g_max = g_max > l_max ? g_max : l_max;
            l_max = 0;
        }else{
            l_umap[str[i]] = i+1;
            l_max++;
        }
    }
    return g_max > l_max ? g_max : l_max;
}

int length_of_longest_substring(std::string str){
    std::unordered_map<char, int> l_umap;
    int max = 0;
    for(int i = 0; i < (int)str.size(); i++){
        if(l_umap[str[i]] != 0){
            return std::max(max, length_of_longest_substring(str.substr(l_umap[str[i]]))); 
        }else{
            l_umap[str[i]] = i+1;
            max++;
        }
    }
    return max;
}
