#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Defining infinite for vertices not connected 
#define INF 99999


int main()
{
    cout<<"Rakshit Choudhary :: 20BCE2663\n\n";
    int v;
    cout<<"Enter number of vertices: ";
    cin>>v;
    int graph[v][v];
    cout<<"Enter 99999 for the 2 points not connected\n\n";
    cout<<"Enter values of adjancey matrix\n";
    for(int i=0;i<v;i++)
    {
        cout<<"Enter values for "<<(i+1)<<" row"<<endl;
        for(int j=0;j<v;j++)
            cin>>graph[i][j];
    }
    int dist[v][v];
    
    for(int i=0;i<v;i++)
    {
        for (int j=0;j<v;j++)
            dist[i][j] = graph[i][j];
    }
    
    for (int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++)
            {
                if(dist[i][j] > (dist[i][k]+dist[k][j])
                && (dist[k][j] != 99999 &&
                dist[i][k] != 99999))
                    dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
  
    cout<<"The shortedt distance matrix: \n";
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(dist[i][j] == 99999)
                cout<<"INF"<< " ";
            else
                cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
