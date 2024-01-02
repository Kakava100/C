#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;
    float d,e=3;
    scanf("%d %d %d", &a, &b, &c);
    d=(a+b+c)/e;
    printf("%.2f\n", d);
    getchar();
    getchar();    	
    return 0;
}

