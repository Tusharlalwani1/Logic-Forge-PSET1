#include<iostream>
#include <vector>
using namespace std;


double balancedPerformanceScore(const vector<int> &A, const vector<int> &b){
    vector<int> merged;
    int i = 0, j = 0;

    while(i < A.size() && j < b.size()){
        if (A[i] <= b[j]){
            merged.push_back(A[i]);
            i++;
        }
        else{
            merged.push_back(b[j]);
            j++;
        }
    }

    while(i < A.size()){
        merged.push_back(A[i]);
        i++;
    }

    while (j < b.size())
    {
        merged.push_back(b[j]);
        j++;
    }

    int total = merged.size();

    // agr total odd hai

    if (total % 2 == 1) {
        return merged[total / 2];
    }

    // agr even hai

    return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    
}


