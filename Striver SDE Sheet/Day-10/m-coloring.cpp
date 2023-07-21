class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
   
    bool isSafe(int node, int currCol, bool graph[101][101], int m, int n
            ,int color[]) {
        for(int i=0; i<n; i++) {
            if(i!=node && graph[i][node]==true && color[i]==currCol) {
                return false;
            }
        }
        return true;
    }
    bool solve(int node, bool graph[101][101], int m, int n, int color[]) {
        if(node == n) {
            return true;
        }
        for(int i=1; i<=m; i++) {
            if(isSafe(node, i, graph, m, n, color)) {
                color[node] = i;
                if(solve(node+1, graph, m, n, color)) {
                    return true;
                }
                color[node] = 0;
            }
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
         int color[n] = {0};
        if(solve(0, graph, m, n, color))   return true;
        return false;
        
    }
};