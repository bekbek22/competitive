#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector<vii> AdjList;
vi taken; //global boolean flag to avoid cycle
priority_queue<ii> pq; //priority queue to help choose shorter edges
void process(int vtx) {
    taken[vtx] = 1;
    for (int j = 0; j < AdjList[vtx].size(); j++) {
        ii v = AdjList[vtx][j];
        if (!taken[v.first]) pq.push(ii(-v.second, -v.first));
    }
}
// sort by (inc) weight then by (inc) id by using -ve sign to reverse order

using namespace std;

int main() {
    int V, E, u, v, w;
    scanf("%d %d", &V, &E);
    AdjList.assign(V, vii());
    vector< pair<int, ii> > EdgeList;
    //format: weight, two vertices of the edge
    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &u, &v, &w);
        // read the triple: (a, b, w)
        EdgeList.push_back(make_pair(w, ii(u, v)));
        // but store it as: (w, a, b)
        AdjList[u].push_back(ii(v, w));
        AdjList[v].push_back(ii(u, w));

    int mst_cost = 0;
    // inside int main() --- assume the graph has been stored in AdjList
    taken.assign(V, 0);
    process(0); //take vertex 0 and process all edges incident to vertex 0
    mst_cost = 0;
    while (!pq.empty()) { //repeat until V vertices (E = V-1 edges) are taken
        ii front = pq.top();
        pq.pop();
        u = -front.second;
        w = -front.first; // negate the id and weight again
        if (!taken[u]){ // we have not connect this vertex yet
            mst_cost += w;
            process(u);
        } // take u and process all edges incident to u
    } // each edge is in pq only once!
    printf("MST cost = %d (Prim's)\n", mst_cost);
    }
}