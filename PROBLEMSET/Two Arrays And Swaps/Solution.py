t = int(input())
while(t != 0):
    arr = input().split()
    n = int(arr[0])
    k = int(arr[-1])
    A = input().split()
    B = input().split()
    
    A = [ int(i) for i in A]
    B = [ int(i) for i in B]
    max_sum = sum(A)
    if k == 0:
        print(sum(A))
    else:
        while(k != 0):
            index_B = 0
            max_B = 1
            for i in range(len(B)):
                if B[i] >= max_B:
                    max_B = B[i]
                    index_B = i
            
            min_A = 30
            index_A = 0
            for i in range(len(A)):
                if A[i] <= min_A:
                    min_A = A[i]
                    index_A = i
            tmp = max_B
            B[index_B] = min_A
            A[index_A] = tmp
            k -= 1
            if sum(A) >= max_sum:
                max_sum = sum(A)
        print(max_sum)
    t -= 1          