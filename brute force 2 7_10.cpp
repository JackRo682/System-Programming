#include <stdio.h>
#include <cstdio>

int main(void)
{
	int n=0, i=0, sum=0, temp=0;
	
	scanf("%d", &n);
	
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
