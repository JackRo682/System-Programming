#include <stdio.h>

int main(void)
{
	int N=0, i=0, n=0, j=0, k=0, sum=0, near=0, m=0;
	int arr[100];
	
	printf("�Է¹޴� ���ڸ� �Է��Ͻÿ� :");
	scanf("%d", &N);
	
	if(N<3){
		printf("3���� �� ū ���� �Է��Ͻÿ�\n");
	}else if(N>100){
		printf("100���� ���� ���� �Է��Ͻÿ�\n");
	}
	
	for(i=0; i<N; i++)
	{
		scanf("%d", arr+i);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				sum=arr[i]+arr[j]+arr[k];
				if(near<sum&&sum<=m){
					near=sum;
				}
			}
		}
	}
	printf("%d", near);
	return 0;
}
