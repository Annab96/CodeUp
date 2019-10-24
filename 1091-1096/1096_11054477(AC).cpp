#include <stdio.h>

int main(){
    int n, x, y, i, j, a[20][20]={0};
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d", &x, &y);
        a[x][y]=1;
    }
    for(i=1;i<=19;i++){
        for(j=1;j<=19;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
	return 0;
}
