#include<iostream>
#include<vector>
using namespace std;
// undirected unweighted graph 
//adjancy matrix  repersentation

int main(){
    int n,e;
    cout<<"Enter number of nodes and edges: ";
    cin>>n>>e;
    // create adjancy matrix
    vector<vector<int>> adjMatrix(n,vector<int>(n,0));

    cout<<"Enter edges (u v) format:"<<endl;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        // undirected graph
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }

    cout<<"Adjancy Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}