#include <stdio.h>

int main(int argc, char **argv)
{
    double x1, y1, x2, y2, k, b;
        printf("Enter point A coordinates:\n");
        scanf("%lf%lf", &x1, &y1);
        printf("Enter point B coordinates:\n");
        scanf("%lf%lf", &x2, &y2);
        printf("A(%.2f;%.2f) B(%.2f;%.2f)\n", x1, y1, x2, y2);
        k = (y2 - y1) / (x2 - x1);
        b = (x2 * y1 - x1 * y2) / (x2 - x1);
    if (x1 == x2 && y1 == y2){
        printf("Error.\n No straight lines.\n");
        return 0;
    }
    if (x1 == x2){
        printf("x = %.2f\n", x1);
        return 0;
    }
    if (y1 == y2){
        printf("y = %.2f\n", b);
        return 0;
    }
        
        printf("y = %.2f*x + %.2f", k, b);
    
        
    getchar();
    getchar();	
           

    return 0;
}
