#include <cstdio>
#include <stdio.h>

int main(void)
{
	int N=0, M=0, temp=0, sum=0;
	int i=0, j=0;
	
	for(i=n-57;i<n;i++){
		while(temp>0){
			sum+=(temp%10);
			temp/=10;
		}
		if(n==sum){
			printf("%d", i);
			break;
		}
	}
	if(i>n)
		printf("0");
	return 0;
}
