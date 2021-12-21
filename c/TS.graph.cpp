#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,m;
    cin >> n >>m;
    int count=0;
    vector<vector<int> >adj_list(n);
    vector<int>in_digree(n,0);
    for(int i=0; i<n; i++){
        int u,v;
        cin >> u >> v;
        // u->v
        adj_list[u].push_back(v);
        in_digree[v]++;
    
    }
    queue<int>pq;
    for(int i=0; i<n; i++){
        if(in_digree[i]==0){
            pq.push(i);
        }
    }
    while (!pq.empty())
    {
        count++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it:adj_list[x]){
            in_digree[it]--;
            if(in_digree[it]==0){
                pq.push(it);
            }
        }

        
    }
    cout<<endl<<count;
    return 0;
    

}