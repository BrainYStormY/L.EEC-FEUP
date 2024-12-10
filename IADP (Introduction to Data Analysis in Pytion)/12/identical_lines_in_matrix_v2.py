#Given a square matrix A (dimension N x N) write a program that identifies if there are identical lines and the corresponding line numbers.
#input order (one per line): N, A[0][...], A[1][...], ...

N = int(input())

A = [[0] * N for i in range(N)]

for i in range(N):
    for j in range(N):
        A[i][j] = float(input())

skips = list()

for i in range(N):
    for ii in range(i+1, N):
        if (A[i] == A[ii]) and (i not in skips):
            skips.append(ii)
            print(f'line {i} is identical to line {ii}')