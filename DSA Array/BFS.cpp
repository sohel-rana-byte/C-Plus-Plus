#include<bits/stdc++.h>
using namespace std;

void BFS_Algo(vector<vector<int>>BFS_Graph,int start)

{
    int t_Node=BFS_Graph.size();

    vector<bool>visited(t_Node,false);

    queue<int>Q;
    int current;
    cout << current<<endl;
    visited[current]=true;
    Q.push(current);

    while ( !Q.empty())
    {
        current=Q.front();
        for (int i=0;i<t_Node;i++)
        {
            if (BFS_Graph[current][i]==1 && visited[i]==false)
            {
                Q.push(i);
            cout << i<<endl;
            visited[i]=true;
            }
        }
        Q.pop();
    }
}


int main()
{
    ifstream infile("Input_BFS.txt");

    int n;
    infile>>n;
    n=n+1;

    vector<vector<int>>BFS_Graph(n,vector<int>( n));

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            infile>> BFS_Graph [i][j];
        }
    }
    int start=1;
    BFS_Algo(BFS_Graph,start);
}
