#include <iostream>

using namespace std

int main(void)
{
	int N, temp;
	
	cin>>N;
	
	int arr[N];
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	for(int j=0;j<N-1;j++){
		for(int k=j+1;k<N;k++){
			if(arr[j]>arr[k]){
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
		
		for(int I=0;I<N;I++){
			if(I+1<N && arr[I]==arr[I+1])
				continue;
		cout<<arr[I]<<end1;
		}
	}
}
