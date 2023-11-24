#include <bits/stdc++.h>

using namespace std;


 void dfs(vector<int>adj[],bool vis[],int node)
    {
        vis[node] = true;
        cout<<node<<" ";
        
           vector<int>::iterator it;
           
           for(it = adj[node].begin();it!=adj[node].end();it++)
           {
               if(!vis[*it])
               {
                   dfs(adj,vis,*it);
               }
           }
    }
    

int main()
{
   
    int n,m;
    cout<<"Enter the number of nodes/vertices :";
    cin>>n;
    cout<<"Enter the number of pairs :";
    cin>>m;
    
    vector<int>graph[n+1];
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cout<<"Enter the 2 pairing vertices :";
        cin>>x>>y;
        
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    int s;
    cout<<"Enter the starting point :";
    cin>>s;
    bool vis[n+1];
    vector<int>adj[n+1];
    
    for(int i=0;i<=n;i++)
    {
        vis[i] = false;
    }
    
    dfs(graph,vis,s);

    return 0;
}

    
   
