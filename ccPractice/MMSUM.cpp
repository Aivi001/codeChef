answer = -INFINITY
current = 0
for j=1..N:
    current = max(A[j], current + A[j])
    answer = max(answer, current)

//Kadane's Algo

answer = -INFINITY
current = 0
for j=1..N:
    current = max(A[j], current + A[j])
    answer = max(answer, current)
    E[j] = current

current = 0
for j=N..1 by -1:
    current = max(A[j], current + A[j])
    answer = max(answer, current)
    S[j] = current

for i=2..N-1:
    answer = max(answer, E[i-1] + S[i+1])