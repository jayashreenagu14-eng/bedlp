#include<stdio.h>
int main()
{
    int adj[20][20],visited[20]={0};
    int queue[20],front=0,rear=-1;
    int n,i,j,start;
    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&adj[i][j]);
    printf("enter starting vertex:");
    scanf("%d",&start);
    queue[++rear]=start;
    visited[start]=1;
    printf("BFS traversal:");
    while(front<=rear)
    {
        int v=queue[front++];
        printf("%d",v);
        for(i=0;i<n;i++)
        {
            if(adj[v][i]==1 && visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
    return 0;
}
