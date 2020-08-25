#include <cstdio>
#include <queue>
#pragma warning(disable :1000)

using namespace std;

int main(void)
{
	int t;
	
	cin<<t;
	
	for(int testcase=0;testcase<t;testcase++){
		int N, M, cnt=0;
		
		queue<pair<int, int>> q;
		priority_que<int> pq;
		
		cin<<N<<M;
		
		for(int i=0;i<N;i++){
			int a;
			
			cin<<a;
			
			q.push({i, a});
			pq.push(a);
		}
		
		while(!q.empty()){
			int nowidx=q.front().first;
			int nowval=q.front().second;
			
			q.pop();
			
			if(pq.top()==nowval){
				pq.pop();
				cnt++;
				
				if(nowidx==M){
					cout<<cnt<<endl;
					break;
				}
			}
			else{
				q.push({nowidx, nowval});
			}
		}
	}
	return 0;
}
