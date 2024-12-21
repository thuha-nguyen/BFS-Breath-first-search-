#include <iostream>
#include <string>
#include <queue>
#define MAX 100
using namespace std;
class graph{
	int n, A[MAX][MAX], chuaxet[MAX];
	public:
		void readdata();
		void init(){
			for (int i = 1; i<=n; i++ ){
				chuaxet[i]=1;
		 }
		}
		void bfs(int u);
		void queuedfs (int u);
		
}; 
void graph :: readdata (){
	cin >> n;
	for (int i = 1; i<=n; i++){
		for (int j= 1; j<=n; j++)
			cin >> A[i][j];
	
		
	}
}
void graph::bfs(int u ){
	queue<int> Queue;
	Queue.push(u);
	chuaxet[u]=0;
	while (!Queue.empty()){
		int s=Queue.front();
		Queue.pop();
		cout <<s<<" ";
		for (int t = 1; t<=n; t++)
			if  (A[s][t]==1 && chuaxet[t] == 1){
				Queue.push(t);
				chuaxet[t]= 0;
			}
	}
	
} 
int main(){
	graph g;
	g.readdata();
	g.init();
	g.bfs (1);
}
