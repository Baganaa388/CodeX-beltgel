n = int(input())
a = list(map(int, input().split()))
max_element = a[0]
final_boss = a[0]
index = 0
for i in range(n) :
    if a[i] >= max_element :
        max_element = a[i]
        index = i

a[index] = 0

for i in range(n) :
    if a[i] >= final_boss :
        final_boss = a[i]

print(final_boss)