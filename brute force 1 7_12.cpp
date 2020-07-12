#include <stdio.h>

int main(void)
{
	int N=0, M=0, sum=0, max=0;
	int i=0, j=0, k=0, arr[100]={0, };
	
	scanf("%d %d", &N, &M);
	
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			for(k=j+1;k<j;k++){
				sum=arr[i]+arr[j]+arr[k];
				if(sum>max&&sum<=M)
					max=sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}
