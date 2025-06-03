#include <stdio.h>

void inc_dec (int *a, int *b);

int main(){
    int a, b;
    scanf("%i %i", &a, &b);
		
    inc_dec(&a, &b);
    
	printf("a: %i\nb: %i\n", a, b);
}

void inc_dec (int *a, int *b){
    (*a)++;
    (*b)--;
}
