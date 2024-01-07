#include <stdio.h>

int main(int argc, char **argv)
{
    double a, b, c;
    printf("Enter sides of triangle:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a < 0 || b < 0 || c < 0) {
        printf("Error input\n");
        return 0;
    }
    printf("Triangle exist:\n");
    ((a + b) > c && (b + c) > a && (a + c) > b) == 1 ? (printf("YES")) : (printf("NO"));
    
 
        
    getchar();
    getchar();	
           

    return 0;
}
