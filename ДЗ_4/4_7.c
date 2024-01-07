#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, e, max;
		scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
        max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        max = (max > d) ? (max > e ? max : e) : (d > e ? d : e);
        printf("max = %d", max);
	getchar();
	getchar();	
           

	return 0;
}
