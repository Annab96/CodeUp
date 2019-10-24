#include <stdio.h>

int main(){
    int n, m, i, a[24]={0};
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &m);
        a[m]++;
    }
    for(i=1;i<24;i++){
        if(a[i]>0) break;
    }
    printf("%d", i);
	return 0;
}
