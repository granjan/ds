#include <stdio.h>
#define MAX 10

int countWays(int N, int coins[MAX], int size)
{
    int matrix[N + 1];
    return matrix;
}

int main()
{
    int coins[] = {1, 2, 3, 5, 8};
    int N = 30;
    int size = sizeof(coins) / sizeof(coins[0]);
    int ways = countWays(N, coins, size);
    printf("%d\n", ways);
    return 0;
}
