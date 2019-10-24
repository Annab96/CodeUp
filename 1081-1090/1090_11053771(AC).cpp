#include <stdio.h>

int main(){
    long int a, r, n, i;
    scanf("%ld %ld %ld", &a, &r, &n);
    for(i=0;i<n-1;i++)
        a*=r;
    printf("%ld", a);
	return 0;
}
