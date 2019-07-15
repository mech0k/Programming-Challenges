#include <iostream>

struct Point{
    int x;
    int y;
};

int main(){
    int n;
    while (1){
        std::cin >> n; 
        if(n == 0) break;

        Point arr_points[n];
        int x, y;
        for(int i=0; i<n; i++){
            std::cin >> x >> y;
            arr_points[i].x = x;
            arr_points[i].y = y;
        }

        double area = 0; 
        for(int i=0; i<n; i++){
            if(i == n-1){
                area += (arr_points[0].x - arr_points[i].x) * (arr_points[0].y + arr_points[i].y);
            }else{
                area += (arr_points[i+1].x - arr_points[i].x) * (arr_points[i+1].y + arr_points[i].y);
            }
        }

        if(area > 0){
            printf("CW %.1f\n", area/2);
        }else{
            printf("CCW %.1f\n", area/-2);
        }
    }
    return 0;
}
