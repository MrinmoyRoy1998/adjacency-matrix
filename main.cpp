#include<iostream>
using namespace std;
int main()
{
    int adj[100][100];
    int node,edge;
    int n1,n2;
    cout<<"Enter the number of nodes and edges:";
    cin>>node>>edge;
    cout<<"Enter the starting and ending point of edges:";
    cout<<endl;
    for(int i=1;i<=edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    cout<<endl;
    cout<<"The converted graph is :"<<endl;
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++){
            cout<<adj[i][j];
        }
        cout<<endl;
    }
    return 0;
}
