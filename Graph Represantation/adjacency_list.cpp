#include <bits/stdc++.h>
using namespace std;
void create_edge(vector<int> adj[], int u,int v){
    cout<<"Y"<<u;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print_graph(vector<int> adj[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<endl;
        for(auto dt: adj[i])cout<<dt<<" ";
        cout<<"\n";
    }
}

int main() {
   vector<int> adj[5];
    for(int i=0;i<5;i++)adj[i].push_back(i);
    vector<pair<int,int>>edges={{1,2},{0,1},{2,3},{3,4},{0,4}};
    for(auto dt: edges){
        create_edge(adj,dt.first,dt.second);
    }
    print_graph(adj,5);
}
