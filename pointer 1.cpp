#include <Turboc.h>

void main()
{
	char ar[]='Pointer';
	char *p1, *p2;
	
	p1=&a[0];
	p2=&a[5];
	
	printf("%c�� %c�� �Ÿ��� %d\n", *p1, *p2, p2-p1);
}
