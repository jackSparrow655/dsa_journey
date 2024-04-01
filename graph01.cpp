#include <bits/stdc++.h>
using namespace std;
// template <typename T>
class graph{
    public:
    map<int, list<int> >map;
    // creating graph
    void create(int u, int v, int check){
        map[u].push_back(v);
        if(check == 0){
            map[v].push_back(u);
        }
    }

    void print(){
        for(auto i:map){
            cout << i.first << "->"<< " ";
            for(auto j : i.second){
                cout << j <<", ";
            }
            cout << endl;
        }
    }
};
int main(){
    int n;
    cout << "enter the number the nodes: ";
    cin >> n;
    int m;
    cout << "enter the number of edges: ";
    cin>> m;
    graph g;
    cout << "enter the edges: ";
    for(int i = 0; i< m; i++){
        int u, v;
        cin >> u >> v;
        g.create(u, v, 0);
    }
    g.print();
}