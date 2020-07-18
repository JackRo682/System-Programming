#include <stdio.h>

#define minFinder(a,b) a<b ? a:b

int main()
{
	char board[50][50];
	
	int N=0, M=0;
	int min=80;
	int cntB=0, cntW=0;
	int i=0, j=0, a=0, b=0;
	
	scnaf("%d %d", &N, &M);
	
	for(i=0;i<N;i++)
		scanf("%s", &board[i]);
		
	for(i=0;i<N-7;i++){
		for(j=0;j<M-7;j++){
			cntB=0;
			cntW=0;
			for(a=i;a<i+8;a++){
				for(b=j;b<j+8;b++){
					if((a+b)%2==0)
						cntW++;
					else
						cntB++;
				}
				else{
					if(board[a][b]=='B')
						cntB++;
					else
						cntW++;
				}
			}
			min=minFinder(min,cntB);
			min=minFinder(min,cntW);
		}
	}
	printf("%d\n", min);
	return 0;
}
