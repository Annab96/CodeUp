﻿#include <stdio.h>

int main(){
    int a,b,i;
    scanf("%d %d", &a, &b);
    for(i=0; i<b; i++)
        a*=2;
    printf("%d", a);    
	return 0;
}
