﻿#include <stdio.h>

int main(){
    int a, b, c, i=1;
    scanf("%d %d %d", &a, &b, &c);
    while(1){
        if(i%a==0&&i%b==0&&i%c==0) break;
        i++;
    }
    printf("%d", i);
	return 0;
}
