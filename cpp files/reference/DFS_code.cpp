#include<iostream>
#include<string.h>
using namespace std;
int Node,edge,st,G[100][100];
bool vis[100];
void DFS(int cur){
	cout<<cur<<endl;
	vis[cur]=true;
	for(int i=0;i<Node;i++){
		if(G[cur][i]&&!vis[i]){
			if(G[cur][i]&&!vis[i]){
				DFS(i);
			}
		}
	}
}

int main(){
	cin>>Node>>edge>>st;
	memset(vis,false,sizeof(vis));
	for(int i=0;i<edge;i++){
		int a,b;
		cin>>a>>b;
		G[a][b]=1;
		G[b][a]=1;
	}
	DFS(st);
	return 0;
}
