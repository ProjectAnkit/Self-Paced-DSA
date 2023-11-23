// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,m;
    cout<<"Enter the number of nodes/vertex : ";
    cin>>n;
    cout<<"Enter the number of pairs : ";
    cin>>m;
    vector<int> graph[n+1];
    for(int i=0;i<m;i++)
    {
        cout<<"Enter the 2 connected edges :";
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    cout << "Contents of the vector:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
