#include <stdio.h>
#define INF 999

int min(int a, int b) {
    return (a < b) ? a : b;
}

void floyd(int p[][10], int n) {
    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
}

void main() {
    int a[10][10], n, i, j;

    printf("\nEnter the n value: ");
    scanf("%d", &n);

    printf("\nEnter the graph data:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    floyd(a, n);

    printf("\nShortest path matrix\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}


 Input/Output:
 Enter the n value:4
 Enter the graph data:
 0 999 3999
 2 0999999
 999 7 01
 6 999 9990
 Shortest path matrix
 0 1034
 2 056
 7 701
 6 1690
