#Given a sequence of n values ​​and their respective weights, calculates the weighted average (Xi - Values; Pi - Weights) using a for loop.
#(input order: n; X0; P0; X1; P1;...)
#weighted average = Sum{i=1;n}(Pi*Xi) / Sum{i=1;n}(Pi)

n = int(input("n:"))

sum_val_wei = 0
sum_wei = 0

for i in range(0, n, 1):
    val = int(input("X" + str(i) + ":"))
    wei = int(input("P" + str(i) + ":"))
    sum_val_wei += val * wei
    sum_wei += wei

wei_avg = sum_val_wei / sum_wei

print(f'Weighted average = {wei_avg:.2f}')