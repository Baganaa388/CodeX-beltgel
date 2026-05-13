n = int(input())
k = int(input())

if n < 5 : 
    for i in range(1,k+1,1):
        print(n , "*", i , "=" , i*n)
else:
    for i in range(k,0,-1):
        print(n , "*", i , "=" , n*i)