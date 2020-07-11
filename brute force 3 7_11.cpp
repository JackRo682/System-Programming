#include <stdio.h>

int main(void)
{
	int N=0, i=0, k=0, j=0;
	int x[50]={0, }, y[50]={0, };
	
	scanf("%d", &N);
	
	for(i=0;i<N;i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(x[i]<x[j]&&y[i]<y[j])
				k++;
		}
		printf("%d", k+1);
	}
	return 0;
}
