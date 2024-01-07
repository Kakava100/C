#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int a;
        printf("Enter month number:\n");
        scanf ("%d", &a);
        ((a > 11 && a < 13) || (a < 3 && a >0)) ? (printf("Winter")) : ((a > 2 && a < 6) ? printf("Spring") : (a > 5 && a < 9) ? printf("Summer") : ((a > 8 && a < 12) ? printf("Autumn") : printf("Error input")));
            // понимаю, что надо проще, но интересно было будет ли работать
 
        
    getchar();
    getchar();	
           

    return 0;
}
