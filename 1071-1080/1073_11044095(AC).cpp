﻿#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n!=0){
        while(n!=0){
            printf("%d\n", n);
            scanf("%d", &n);
        }   
    }else return 0;
	return 0;
}
