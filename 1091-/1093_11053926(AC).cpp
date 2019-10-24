#include <stdio.h>

int main(){
    int n, m, i, a[24]={0};
    scanf("%d", &n); // 횟수 입력
    for(i=0; i<n; i++){
        scanf("%d", &m);
        a[m]++;
    }
    for(i=1;i<24;i++)
        printf("%d ",a[i]);
	return 0;
}
