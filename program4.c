#include <stdio.h>
#define INF 999
void dijkstra(int c[10][10], int n, int s, int d[10]) {
    int v[10] = {0}, min, u, i, j;
    for (i = 1; i <= n; i++)
        d[i] = c[s][i];
    v[s] = 1;
    for (i = 1; i <= n; i++) {
        min = INF;
        for (j = 1; j <= n; j++)
            if (!v[j] && d[j] < min)
                min = d[u = j];
        v[u] = 1;
        for (j = 1; j <= n; j++)
            if (!v[j] && (d[u] + c[u][j] < d[j]))
                d[j] = d[u] + c[u][j];
    }
}
int main() {
    int c[10][10], d[10], i, j, s, n;
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("Enter the graph data:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &c[i][j]);
    printf("Enter the source node: ");
    scanf("%d", &s);
    dijkstra(c, n, s, d);
    for (i = 1; i <= n; i++)
        printf("\nShortest distance from %d to %d is %d", s, i, d[i]);
    return 0;
}



 Input/Output
 Enternvalue:6
 Enterthegraphdata:
 0151099945999
 99901599920999
 20999020999999
 99910999035999
 999999999300999
 99999999949990
 Enterthesoucenode:2
 Shortestdistancefrom2to1is35
 Shortestdistancefrom2to2is0
 Shortestdistancefrom2to3is15
 Shortestdistancefrom2to4is35
 Shortestdistancefrom2to5is20
 Shortestdistancefrom2to6is999
