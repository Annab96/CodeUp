#include <stdio.h>

int main(){
    int n[4], i;
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    for(i=0;i<3;i++){
        if(n[i]%2==0)
            printf("%d\n", n[i]);
    }
	return 0;
}
