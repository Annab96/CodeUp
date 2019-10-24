#include <stdio.h>

int main(){
    char c;
    int i = 0;
    scanf("%c", &c);
    while((c-97)>=0){
        printf("%c ", 97+i);
        i++; c--;
    }
	return 0;
}
