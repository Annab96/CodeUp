#include <stdio.h>

int main(){
    char c;
    do{
        scanf("%c ", &c);
        printf("%c\n", c);
    }while(c!='q');
	return 0;
}
