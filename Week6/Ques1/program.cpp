#include <bits/stdc++.h>
using namespace std;


void check_path(vector<int> *graph,int v1,int v2,int n){
    int visited[n]={0};
    stack<int> s;
    s.push(v1);
    
    while(!s.empty()){
            int curr=s.top();
            s.pop();
            visited[curr]=1;
            for(int i=0;i<n;i++){
                if(graph[curr][i]==0)
                    continue;
                if(!visited[i]){
                    s.push(i);
                    visited[i]=1;
                    if(i==v2)
                    {
                        cout<<"Yes Path Exists.";
                        return;
                    }
                }
            }
    }
    cout<<"No Such Path Exists.";
}

int main(){
    int n,v1,v2,node;
    cin>>n;
    vector<int> graph[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>node;
            graph[i].push_back(node);  
        }
    }
    cin>>v1>>v2;
    v1--;
    v2--;

    check_path(graph,v1,v2,n);

return 0;
}