#!/usr/bin/python3

n, m, k = map(int, input().split())
n_values = list(map(int, input().split()))
m_values = list(map(int, input().split()))
k_values = list(map(int, input().split()))

arr_values = []
for var in k_values:
    arr_values.append(var*(2**.5)/2)

for var in m_values:
    arr_values.append(var)

n_values.sort()
n_values.reverse()
arr_values.sort()
arr_values.reverse()

count = 0
arr_visited = []
for n in n_values:
    for i in range(0, len(arr_values)):
        if arr_visited.count(i) == 0 and n > arr_values[i]:
            arr_visited.append(i)
            count += 1
            break

print(count)
