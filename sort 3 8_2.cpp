#include <iostream>
#include <cstdio>

using namespace std;

int arr[100001];

int main()
{
	int n;
	int i;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		int temp;
		scanf("%d", &tmp);
		arr[tmp]++;
	}
	
	for(i=1;i<=10000;i++)
	{
		for(int j=0;j<arr[i];j++){
			printf("%d\n", i);
		}
	}
	
	return 0;
}
