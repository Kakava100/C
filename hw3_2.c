#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c,sum;
    scanf("%d %d %d", &a, &b, &c);
    sum=a+b+c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    sum=a*b*c;
    printf("        %d*%d*%d=%d\n", a, b, c, sum);
    getchar();
    getchar();    	
	return 0;
}

