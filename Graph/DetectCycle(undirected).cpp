#include<bits/stdc++.h>
using namespace std;

bool findcycle(int n,vector<int>adj[],bool vis[],int parent)
{
    vis[n] = true;
    for(auto it = adj[n].begin();it!=adj[n].end();it++)
    {
        if(*it!=parent)
        {
            if(vis[*it])
            {
                return true;
            }
            if(!vis[*it] && findcycle(*it,adj,vis,n))
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    bool cycle = false;
    int n,m;
    cout<<"Enter the number of vertices :";
    cin>>n;
    cout<<"Enter the number of pairs :";
    cin>>m;
    
    vector<int>graph[n];
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cout<<"Enter the pairs :";
        cin>>u>>v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    
    bool vis[n];
    for(int i=0;i<n;i++)
    {
        vis[i] = false;
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(!vis[i] && findcycle(i,graph,vis,i-1))
        {
            cycle = true;
        }
    }
    
    if(cycle)
    {
        cout<<"Cycle present";
    }
    else{
        cout<<"Cycle not present";
    }
    
    return 0;
}
