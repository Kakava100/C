#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c;
        scanf ("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d\n", a);
    else if (b > c)
        printf("%d\n", b);
    else
        printf("%d\n", c);
    getchar();
    getchar();	
           

    return 0;
}

