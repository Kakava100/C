#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, e;
		scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int max = a > b ? a : b;
        max = max > c ? max : c;
        max = max > d ? max : d;
        max = max > e ? max : e;
        printf("max = %d\n", max);
    int min = a < b ? a : b;
        min = min < c ? min : c;
        min = min < d ? min : d;
        min = min < e ? min : e;
        printf("min = %d\n", min);
    int sum = min + max;
        printf("sum = %d\n", sum);
    getchar();
    getchar();	
           

	return 0;
}

