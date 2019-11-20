#!/usr/bin/python3
from dataclasses import dataclass

@dataclass
class Point:
    x: int
    y: int

arr = []
for i in range(0, 8):
    temp = input()
    for j, c in enumerate(temp):
        if c == '*':
            arr.append(Point(j, i))

valid = True
if len(arr) != 8:
    valid = False

for p in arr:
    if not valid:
        break
    for var in arr:
        if var.x == p.x and var.y != p.y:
            valid = False
            break
        if var.y == p.y and var.x != p.x:
            valid = False
            break
        for i in range(-7, 8):
            if i != 0 and var.x == p.x+i and var.y == p.y+i:
                valid = False
                break
            if i != 0 and var.x == p.x-i and var.y == p.y+i:
                valid = False
                break

if valid:
    print("valid")
else:
    print("invalid")
