#include <stdio.h>

int main(){
    char c;
    int i = 0;
    scanf("%c", &c);
    for(i;c-i>=97;i++)
        printf("%c ", 97+i);
	return 0;
}
