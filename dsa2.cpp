#include<bits/stdc++.h>
#define N 6
#define M 6
#define INT_MAX 2147483647
int min(int x, int y, int z);
int max(int x,int y);
int dp[N][N+2];
int MaximumPath(int Mat[][N])
{
    int result = 0,i,j;
    for ( i = 0 ; i < N ; i++)
        dp[0][i+1] = Mat[0][i];
    for ( i = 1 ; i < N ; i++)
        for (j = 1 ; j <= N ; j++)
            dp[i][j] = max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1])) + Mat[i][j-1] ;
    for (i=0; i<=N; i++)
        result = max(result, dp[N-1][i]);
    return result ;
}
int minpath(int cost[N][M], int m, int n)
{
   if (n < 0 || m < 0)          //base.
      return INT_MAX;
   else if (m == 0 && n == 0)
      return cost[m][n]-(N-1);
   else
      return cost[m][n] + min(minpath(cost, m-1, n-1),minpath(cost, m-1, n),minpath(cost, m, n-1) );
}
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
int max (int x , int y)
{
    if (x < y)
        return (x > y)? x : y;
}
int main()
{
    int i,j;
    int ara[N][M];
    for(i=0;i<N;i++)
        for(j=0;j<M;j++) scanf("%d",&ara[i][j]);
    printf("Highest : %d\n",MaximumPath(ara));
    printf("Lowest : %d\n",minpath(ara, N-1, M-1));
    return 0;
}
