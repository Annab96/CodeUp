#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("plus\n");
        if(n%2==0) printf("even");
        else printf("odd");
    }else{
        printf("minus\n");
        if(n%2==0) printf("even");
        else printf("odd");
    }
	return 0;
}
