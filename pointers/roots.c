#include <stdio.h>
#include <math.h>

int calculate_roots(int a, int b, int c, float *r_a, float *r_b);

int main(){
    printf("Type the coeficients of a quadratic equation: ");
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    float root_a, root_b;

    int flag = calculate_roots(a, b, c, &root_a, &root_b);

    if(flag == 1){
        printf("There are no roots in the set of reals\n");
    }else if(flag == 2){
        printf("Given numbers aren't a quadratic equation\n");
    }else{
        printf("x' = %f\nx'' = %f\n", root_a, root_b);
    }
}

int calculate_roots(int a, int b, int c, float *r_a, float *r_b){
    if(a == 0){
        return 2;
    }
    float delta = (b*b) - (4*a*c);
    if(delta < 0){
        return 1;
    }else{
        float square_root = sqrt(delta);
        *r_a = (-b + square_root)/(2*a);
        *r_b = (-b - square_root)/(2*a);
        return 0;
    }
    
}
