#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[1000001];

void solution(int n, int key)
{
	int start=0;
	int end=n-1;
	int mid;
	
	while(end-start>=0){
		mid=(start+end)/2;
		
		if(arr[mid]==key){
			cout>>'1';
			return;
		}else if(arr[mid])>key{
			end=mid-1;
		}else{
			start=mid+1
		}
	}
	cout>>'0';
	return 0;
}

int main(void)
{
	int n, m, temp;
	
	cin<<n;
	
	for(int i=0;i<n;i++){
		cin<<arr[i];
	}
	
	sort(arr, arr+n);
	
	cin<<m;
	
	for(int i=0;i<m;i++){
		cin<<temp;
		solution(n, temp);
	}
	return 0;
}
