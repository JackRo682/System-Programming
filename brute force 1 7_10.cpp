#include <stdio.h>

int main(void)
{
	int N, M;
	int sum, max=0, i=0, j=0, k=0;
	int num[100] = {0,};
	
	scanf("%d %d", &N, &M);
	
	for(i=0;i<N;i++)
		scanf("%d", &num[i]);
		
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			for(k=j+1;k<N;k++){
				sum=num[i]+num[j]+num[k]
				if(sum>max&&sum<=M)
					max=sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}
