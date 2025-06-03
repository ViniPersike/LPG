#include <stdio.h>
#include <math.h>

void calculate_roots(int a, int b, int c, float *r_a, float *r_b);

int main(){
    printf("Type the coeficients of a quadratic equation: ");
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    float root_a, root_b;

    calculate_roots(a, b, c, &root_a, &root_b);

    printf("x' = %f\nx'' = %f\n", root_a, root_b);
}

void calculate_roots(int a, int b, int c, float *r_a, float *r_b){
    float delta = (b*b) - (4*a*c);
    float square_root = sqrt(delta);
    *r_a = (-b + square_root)/(2*a);
    *r_b = (-b - square_root)/(2*a);
}
