#Given a square matrix A (dimension N x N) determine the second largest element of the matrix, as well as the respective position (row and column).
#input order (one per line): N, A[0][...], A[1][...], ...

N = int(input())

A = [[0] * N for i in range(N)]

Max1 = [-1.00, -1, -1]
Max2 = [-1.00, -1, -1]

for i in range(N):
    for j in range(N):
        A[i][j] = float(input())
        
        if (A[i][j] > Max1[0]) or (Max1[1] == -1):
            Max2[0] = Max1[0]
            Max1[0] = A[i][j]
            
            Max2[1] = Max1[1]
            Max1[1] = i
            
            Max2[2] = Max1[2]
            Max1[2] = j
            
        else:
            if (A[i][j] > Max2[0]) or (Max2[1] == -1):
                Max2[0] = A[i][j]
                Max2[1] = i
                Max2[2] = j

print(f'2nd maximum = {Max2[0]:.2f}, line = {Max2[1]}, column = {Max2[2]}')