#include <iostream>

using namespace std

int N, input;
int num_cnt[10001]={0,};

int main(void)
{
	scanf("%d", &N);
	
	for(int i=0;i<N;i++)
	{
		scanf("%d", &input);
		num_cnt[input]++;
	}
	for(int i=0;i<10001;i++){
		for(int j=0;j<num_cnt[i];j++){
			printf("%d\n", i);
		}
	}
}
