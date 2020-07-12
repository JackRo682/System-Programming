#include <stdio.h>

int main(void)
{
	int N=0, i=0, temp=0, sum=0;
	
	scanf("%d", &N);
	
	for(i=N-57;i<N;i++){
		while(temp>0){
			sum+=(temp%10);
			temp/=10;
		}
		if(n=sum){
			printf("%d", sum);
			break;
		}
	}
	if(i>n)
		printf("0");
	return 0;
}
