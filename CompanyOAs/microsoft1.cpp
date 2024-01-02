/*You are given an undirected graph consisting of N vertices, numbered rom 0 to N-1, connected with M edges. The graph is described by two arrays, A and B, both of length M. A pair(A[K],B[K]), for K from 0 to M-1, describes an edge between vertex A[K] and vertex B[K].

Each second, every vertex with at most one edge connected to it disappears. Every edge which is connected to one of the disappearing vertices also disappears.

After how many seconds will the vertices stop disappearing.

Write a function: 
int solution(int N, int A[], int B[],int M), given an integer N and two arrays A and B of M integers each, returns the number of seconds after which the vertices will stop disappearing, or 0 if no vertices will ever disappear.*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(int N, int A[], int B[]) {
    unordered_map<int, int> mp;
    
    for (int i = 0; i < M; ++i) {
        mp[A[i]]++;
        mp[B[i]]++;
    }

    int seconds = 0;
    while (!mp.empty()) {
        vector<int> rmv;
        for (int i = 0; i < N; ++i) {
            if (mp[i] <= 1) {
                rmv.push_back(i);
            }
        }
        if (rmv.empty()) {
            break;
        }
        for (int p=rmv.size()-1;p>=0;p--) {
            for (int i = 0; i < M; ++i) {
                if (A[i] == rmv[p] || B[i] == rmv[p]) {
                    mp[A[i]]--;
                    mp[B[i]]--;
                    cout<<"hey"<<endl;
                }
            }
            mp.erase(rmv[p]);
            rmv.pop_back();
        }

        seconds++;
    }

    return (mp.empty()) ? seconds : 0;
}

int main() {
    int N = 7;
    int A[] = {0, 1, 2, 1, 4, 4};
    int B[] = {1, 2, 0, 4, 5, 6};
    int M = 6;

    int result = solution(N, A, B, M);
    cout<<"hello"<<endl;
    cout << "Vertices will stop disappearing after " << result << " seconds." << endl;

    return 0;
}
