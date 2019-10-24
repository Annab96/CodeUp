#include <stdio.h>

int main(){
    int n, m, i, a[10001];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &m);
        a[i] = m;
    }
    for(i=n-1;i>=0;i--)
        printf("%d ", a[i]);
	return 0;
}
