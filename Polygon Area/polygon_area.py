#!/usr/bin/python3
from dataclasses import dataclass

@dataclass
class Point:
    x: int
    y: int

while True:
    n = int(input())
    if n == 0:
        break
    arr_points = []
    for var in range(0, n):
        x, y = map(int, input().split())
        arr_points.append(Point(x, y))
    area = 0
    for var in range(len(arr_points)):
        if var == len(arr_points)-1:
            area += (arr_points[0].x - arr_points[var].x) * (arr_points[0].y + arr_points[var].y)
        else:
            area += (arr_points[var+1].x - arr_points[var].x) * (arr_points[var+1].y + arr_points[var].y)
    if area > 0:
        print("CW", area/2)
    else:
        print("CCW", area/-2)
