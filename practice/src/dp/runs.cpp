#include <iostream>
#define RUNMAX 50 
#define BALLMAX 10 
#define WICKETMAX 5
#define mod 1000000007 

using namespace std;

int countWays(int r, int b, int w, int R, int B, int W, int dp[RUNMAX][BALLMAX][WICKETMAX]) {
    if (w > W) {
        return 0;
    }

    if (r > R) {
        return 0;
    }

    if (b == B && r == R) {
        return 1;
    }

    if (b == B) {
        return 0;
    }

    if (dp[r][b][w] != -1) {
        return dp[r][b][w];
    }

    int ans = 0;

    ans += countWays(r, b+1, w, R, B, W, dp);
    ans = ans % mod; 
    ans += countWays(r+1, b+1, w, R, B, W, dp);
    ans = ans % mod; 
    ans += countWays(r+2, b+1, w, R, B, W, dp);
    ans = ans % mod; 
    ans += countWays(r+3, b+1, w, R, B, W, dp);
    ans = ans % mod; 
    ans += countWays(r+4, b+1, w, R, B, W, dp);
    ans = ans % mod; 
    ans += countWays(r+6, b+1, w, R, B, W, dp);
    ans = ans % mod; 
    ans += countWays(r, b+1, w+1, R, B, W, dp);
    ans = ans % mod;

    return dp[r][b][w] = ans;
}

int main() {
    int R = 40;
    int B = 10;
    int W = 4;
    int dp[RUNMAX][BALLMAX][WICKETMAX];

    for (int i = 0; i < RUNMAX; i++) {
        for (int j = 0; j < BALLMAX; j++) {
            for (int k = 0; k < WICKETMAX; k++) {
                dp[i][j][k] = -1;
            }
        }
    }

    cout << countWays(0, 0, 0, R, B, W, dp) << endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < B; j++) {
            for (int k = 0; k < W; k++) {
                cout << dp[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}