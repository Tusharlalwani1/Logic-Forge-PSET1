#include <iostream>     
#include <vector>       
#include <queue>        
#include <tuple>        

using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();

    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> minHeap;

    for (int i = 0; i < n; i++) {
        minHeap.push({matrix[i][0], i, 0});
    }

    int result = 0;


    for (int count = 0; count < k; count++) {
        auto [val, r, c] = minHeap.top();  
        minHeap.pop();
        result = val;

        if (c + 1 < n) {
            minHeap.push({matrix[r][c + 1], r, c + 1});
        }
    }

    return result;
}