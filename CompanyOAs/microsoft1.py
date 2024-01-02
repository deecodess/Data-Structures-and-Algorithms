def solution(N, A, B):
    edges = [set() for _ in range(N)]
    
    for i in range(len(A)):
        edges[A[i]].add(B[i])
        edges[B[i]].add(A[i])

    time = 0
    while True:
        to_remove = set()
        for i in range(N):
            if len(edges[i]) <= 1:
                to_remove.add(i)
        
        if not to_remove:
            break
        
        for i in to_remove:
            for neighbor in edges[i]:
                edges[neighbor].remove(i)
        
        time += 1

    return time

# Example usage
N = 7
A = [0, 1, 2, 1, 4, 4]
B = [1, 2, 0, 4, 5, 6]
print(solution(N, A, B))  # Output: 2