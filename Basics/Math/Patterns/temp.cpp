#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Top-down recursive function with memoization
int lcs(string X, string Y, int m, int n, vector<vector<int>> &dp) {
    // Base case: If either string is empty
    if (m == 0 || n == 0)
        return 0;

    // If already computed, return from memo table
    if (dp[m][n] != -1)
        return dp[m][n];

    // If characters match, store and return the result
    if (X[m - 1] == Y[n - 1])
        dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);

    // If not matching, store and return max of two possibilities
    else
        dp[m][n] = max(lcs(X, Y, m - 1, n, dp), lcs(X, Y, m, n - 1, dp));

    return dp[m][n];
}

int main() {
    string X = "AGGTAB";
    string Y = "GXTXAYB";

    int m = X.length();
    int n = Y.length();

    // Initialize DP table with -1
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

    int length = lcs(X, Y, m, n, dp);

    cout << "Length of LCS: " << length << endl;
        return 0; 
    }