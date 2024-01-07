#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c;
        scanf("%d", &a); //a=435
    if (-a > 0) a = -a;
        b=a/100; //b=4
        c=a%(b*100); //c=35
        c=c/10; //c=3
        a=a-b*100-c*10; //a=5
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

