#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<int>graph[], bool vis[],stack<int>&st){
        
        vis[node] = 1;
        
        for(auto it : graph[node])
        {
             if(!vis[it])
                {
                   dfs(it,graph, vis, st);
                }
        }
        
        st.push(node);
    }

int main()
{
    
    int n,m;
    cout<<"Enter the number of vertices : ";
    cin>>n;
    cout<<"Enter the number of pairs :";
    cin>>m;

    vector<int>graph[n+1];
    
    for(int i=0;i<m;i++)
    {
        cout<<"Enter the two pairs :";
        int x,y;
        cin>>x>>y;
        
        graph[x].push_back(y);
    }
    
    stack<int>st;
    bool vis[n+1];
    
    for(int i=0;i<=n;i++)
    {
        vis[i] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i,graph, vis, st);
        }
    }
    
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
