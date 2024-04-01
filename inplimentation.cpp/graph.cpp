#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    map<int, list<int>>mp;
    void create(int u, int v, bool check){
        mp[u].push_back(v);
        if(check == 0){
            mp[v].push_back(u);
        }
    }
    void print(){
        for(auto i:mp){
            cout << i.first << "->";
            for(auto j:i.second){
                cout << j << ", ";
            }
            cout <<endl;
        }
    }
};
int main(){
    graph g;
    int n, m;
    cout << "enter the number of nodes: ";
    cin>> n;
    cout << "enter the number of edges: ";
    cin >> m;
    cout << "enter the edges: ";
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.create(u, v, 0);
    }
    g.print();
}