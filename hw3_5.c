#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c,p;
    scanf("%d", &a); //a=435
    b=a/100; //b=4
    c=a%(b*100); //c=35
    c=c/10; //c=3
    a=a-b*100-c*10; //a=5
    p=a*b*c;
    printf("%d\n", p);
    getchar();
    getchar();    	
	return 0;
}

