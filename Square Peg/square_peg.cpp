#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    int N, M, K;
    std::cin >> N >> M >> K;

    std::vector<int> n_nums;
    for(int i = 0; i < N; i++){
        int temp;
        std::cin >> temp;
        n_nums.push_back(temp);
    }
    sort(n_nums.begin(), n_nums.end());
    reverse(n_nums.begin(), n_nums.end());

    std::vector<double> arr_nums;
    for(int i = 0; i < M; i++){
        double temp;
        std::cin >> temp;
        arr_nums.push_back(temp);
    }

    for(int i = 0; i < K; i++){
        int temp;
        std::cin >> temp;
        temp = temp*sqrt(2)/2;
        arr_nums.push_back(temp);
    }

    sort(arr_nums.begin(), arr_nums.end());
    reverse(arr_nums.begin(), arr_nums.end());

    int count = 0;
    std::vector<int> arr_visited;
    for (int i = 0; i<N; i++){
        for(int j = 0; j < arr_nums.size(); j++){
            if(std::count(arr_visited.begin(), arr_visited.end(), j) == 0 && n_nums[i] > arr_nums[j]){
                arr_visited.push_back(j);
                count+=1;
                break;
            }
        }
    }

    std::cout << count;

    return 0;
}
