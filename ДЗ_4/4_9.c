#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c;
    char res;
		scanf ("%d%d%d", &a, &b, &c);
        res = (a < b && b < c) == 1 ? printf("YES") : printf("NO"); 
        
	getchar();
	getchar();	
           

	return 0;
}
