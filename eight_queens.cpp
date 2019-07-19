#include <iostream>
#include <vector>

struct Point{
    int x;
    int y;
};

int main(){
    std::vector<Point> points;
    for (int i = 0; i < 8; i++){
        std::string temp;  
        std::cin >> temp;
        for ( int j = 0; temp[j] != '\0'; j++){
            if ( temp[j] == '*' ){
                Point temp_point;
                temp_point.x = j;
                temp_point.y = i;
                points.push_back(temp_point);
            }
        }
        
    }

    bool valid = true;
    if(points.size() != 8){
        std::cout << "invalid";
        return 0;
    }

    for(int i = 0; i < points.size(); i++){
        if (!valid){
            break;
        }
        for(int j = 0; j < points.size(); j++){
            if( points[j].x == points[i].x && points[j].y != points[i].y){
                valid = false;
                break;
            }
            if( points[j].x != points[i].x && points[j].y == points[i].y){
                valid = false;
                break;
            }
            for (int w = -7; w < 8; w++){
                if ( w != 0 && points[j].y == points[i].y + w && (points[j].x == points[i].x - w || points[j].x == points[i].x + w)){
                    valid = false;
                    break;
                }
            }
        }
    }

    if (valid){
        std::cout << "valid";
    }else{
        std::cout << "invalid";
    }

    return 0;
}
