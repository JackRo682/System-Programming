#include <stdio.h>

int main(void)
{
	int num[10]={1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000};
	int count=0, i=9, get=0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%s", get);

	while(1)
	{
		if (get<1)
		{
			break;
		}

		if (num[i]>get)
		{
			i--;
		}
		else
		{
			get-num[i];
			count++;
		}
	}

	printf("����� %d�Դϴ�!", count);
	return 0;
}
