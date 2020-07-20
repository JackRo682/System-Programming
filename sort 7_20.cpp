#include <iostream>

using namespace std;

int main(void)
{
	int N=0, tmp=0;
	
	cin>>N;
	
	int arr[N];
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	for(int j=0;j<N-1;j++){
		for(int k=j+1;k<N;k++){
			if(arr[j]>arr[k]){
				temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(int I=0;I<N;I++){
		if(I+1<N && arr[I]==arr[I+1])
			continue;
		cout<<arr[I]<<end1;
	}
}
