#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,m;
    cout<<"Enter the number of nodes/vertex : ";
    cin>>n;
    cout<<"Enter the number of pairs : ";
    cin>>m;
    vector<pair<int,int>>graph[n+1];
    for(int i=0;i<m;i++)
    {
        cout<<"Enter the 2 connected edges :";
        int u,v,wt;
        cin>>u>>v;
        cout<<"Enter weight :";
        cin>>wt;
        graph[u].push_back({v, wt});
        graph[v].push_back({u, wt});
    }
    
    cout << "Contents of the vector:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (int j = 0; j < graph[i].size(); j++) {
            cout << "("<<graph[i][j].first<<"," << graph[i][j].second<<")";
        }
        cout << endl;
    }

    return 0;
}
