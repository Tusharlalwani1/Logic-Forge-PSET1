#include <iostream>
#include <vector>
using namespace std;

double findMedianPerformanceScore(const vector<int>& A,const vector<int>& b) {
    int m = A.size(), n = b.size();
    int total = m + n;
    int medIndex = total / 2;

    int i = 0, j = 0;
    int count = 0;
    int curr = 0, prev = 0;

    while (count <= medIndex) {
        prev = curr;

        if (i < m && (j >= n || A[i] <= b[j])) {
            curr = A[i];
            i++;
        } else {
            curr = b[j];
            j++;
        }

        count++;
    }

    // odd total
    if (total % 2 == 1) {
        return curr;
    }

    // even total
    return (prev + curr) / 2.0;
}
