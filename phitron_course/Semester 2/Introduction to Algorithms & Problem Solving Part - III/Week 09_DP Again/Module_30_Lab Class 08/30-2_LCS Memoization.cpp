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
*/
