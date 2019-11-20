#include <iostream>
#include <limits>

int main(){
    int n, k;
    std::cin >> n >> k;

    int l, r;

    // gallery
    int** gallery = new int*[n];
    for(int i=0; i<n; i++){
        gallery[i] = new int[2];
    }

    for(int i = 0; i < n; i++){
        std::cin >> l >> r;
        gallery[i][0] = l;
        gallery[i][1] = r;
    }
    
    // min inf
    int min_int = std::numeric_limits<int>::min();

    // arr
    int*** arr = new int**[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int*[k+1];
        for(int j = 0; j <= k; j++){
            arr[i][j] = new int[3];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= k; j++){
            for(int d = 0; d < 3; d++){
                arr[i][j][d] = min_int;
            }
        }
    }

    // when y = 0 (no blockings) 
    // left and right are minus infinity and z is the sum of all cells up to now
    arr[0][0][2] = gallery[0][0] + gallery[0][1];
    for(int i = 0; i < n; i++){
        arr[i][0][0] = min_int;
        arr[i][0][1] = min_int;
        if(i!=0)
            arr[i][0][2] = arr[i-1][0][2] + gallery[i][0] + gallery[i][1];
    }


    // on the first row if k>0, we can't have a blocking when we are in z, so init to - infinity
    // other 2 are correct
    if(k > 0){
        arr[0][1][0] = gallery[0][1];
        arr[0][1][1] = gallery[0][0];
        arr[0][1][2] = min_int;
    }

    // solve
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= std::min(i+1, k); j++){
            arr[i][j][0] = gallery[i][1] + std::max(arr[i-1][j-1][2], arr[i-1][j-1][0]);
            arr[i][j][1] = gallery[i][0] + std::max(arr[i-1][j-1][2], arr[i-1][j-1][1]);
            arr[i][j][2] = gallery[i][0] + gallery[i][1] + std::max(arr[i-1][j][2], std::max(arr[i-1][j][1], arr[i-1][j][0]));
        }
    }

    // ans
    int ans = std::max(arr[n-1][k][0], std::max(arr[n-1][k][1], arr[n-1][k][2]));
    std::cin >> n >> k;    
    std::cout << ans << std::endl;

    // delete gallery 
    for(int i = 0; i < n; i++){
        delete [] gallery[i];
    }
    delete [] gallery;

    // delete arr
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= k; j++){
            delete [] arr[i][j];
        }
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}
