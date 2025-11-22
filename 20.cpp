#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>bfsgraph(int v,vector<int>adj[]){
   queue<int>q;
   vector<int>bfs;
    vector<bool> visited(v,false);
   q.push(0);
   visited[0]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(int j=0;j<adj[node].size();j++){
            int neighbor=adj[node][j];
            if(!visited[neighbor]){
                q.push(neighbor);
                visited[neighbor]=true;
            }
        }
    }
    return bfs;
} 
int main(){
    int v,e;
    cout<<"Enter number of vertices and edges: ";
    cin>>v>>e;
    vector<int>adj[v];
    cout<<"Enter edges (u v) format:"<<endl;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }
    vector<int> bfs=bfsgraph(v,adj);
    cout<<"BFS Traversal: ";
    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }
    cout<<endl;
    return 0; 
}