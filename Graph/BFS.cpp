#include <bits/stdc++.h>
using namespace std;

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
        int x,y;
        cout<<"Enter the 2 connecting vertices :";
        cin>>x>>y;
        
        graph[x].push_back(y);
        graph[y].push_back(x);
        
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<"Node "<<i<<":";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

   //For BFS traversal
    
    queue<int>myQueue;
    bool vis[n+1];
    
    for(int i=0;i<=n+1;i++)
    {
        vis[i] = false;
    }
    
    myQueue.push(5);
    vis[5] = true;
    cout<<"BFS traversal : ";
    while(!myQueue.empty())
    {
        int node = myQueue.front();
        myQueue.pop();
        cout<<node<<" ";
        for(auto it=graph[node].begin();it!=graph[node].end();it++)
        {
           if(vis[*it]!=true)
           {
                myQueue.push(*it);
                vis[*it] = true;
           }
        }
    }
    
    return 0;
}
