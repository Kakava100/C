#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, e, min;
		scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
        min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
        min = (min < d) ? (min < e ? min : e) : (d < e ? d : e);
        printf("min = %d", min);
	getchar();
	getchar();	
           

	return 0;
}
