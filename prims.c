//prims

#include<stdio.h>
#include <string.h>
#define MAX 126

void main(){
    int n;
    int visited[100];int a[100][100];
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter the cost of matrix\n");
    
    for(int i=1;i<=n;visited[i++]=0){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }   
    }
    int source;
    printf("Enter the source\n");
    scanf("%d",&source);
    visited[source] =1;
    int ne=1;int u;int v;
    int min_cost =0;
    while(ne<n){
        int min = 999;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]<min){
                    if(visited[i]==0)
                        continue;
                    else{
                        min = a[i][j];
                        u=i;v=j;
                    }
                }
            }
        }
        if(visited[u]==0 || visited[v]==0){
            min_cost+=min;
            visited[v] = 1;ne++;
            printf("EDGE %d to EDGE %d is %d\n",u,v,min);
        }
        a[u][v] = a[v][u] = 999;
    }
    printf("Minimum cost = %d",min_cost);
    
}
