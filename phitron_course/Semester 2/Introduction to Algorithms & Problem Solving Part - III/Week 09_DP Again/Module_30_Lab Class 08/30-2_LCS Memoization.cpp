/*
Longest Common Subsequence

LCS(i, j){
    if i == s.size() or j == t.size():
        return 0

    if s[i] == t[j]:
        return 1 + LCS(i+1, j+1)

    else:
        return max(LCS(i+1, j), LCS(i, j+1))
}

1. LCS(i, j) -> Length of the longest common subsequence between strings s[i..n] and t[j..m]

2. LCS(i, j) = 1 + LCS(i+1, j+1) if s[s] == t[j]
                else max{LCS(i+1, j), LCS(i, j+1)}

3. LCS(i, m) = 0
   LCS(n, j) = 0
*/
