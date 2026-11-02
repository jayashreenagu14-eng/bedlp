#include <stdio.h>
int adj[20][20],visited[20],n;
void dfs(int v)
{
    int i;
    printf("%d",v);
    visited[v]=1;
    for(i=0;i<n;i++)
    {
        if(adj[v][i]==1&&visited[i]==0)
            dfs(i);
    }
}
int main()
{
    int i,j,start;
    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&adj[i][j]);
    printf("enter strting vertex:");
    scanf("%d",&start);
    printf("dfs traversal:");
    dfs(start);
    return 0;
}
