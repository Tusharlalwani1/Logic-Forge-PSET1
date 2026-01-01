#include<iostream>
#include <vector>
using namespace std;

vector<int> teamContributionMultiplier(const vector<int>& contributions){
    int n = contributions.size();
    vector<int> impact(n, 1);

    // prod elements ka left side se
    int leftProd = 1;
    for(int i = 0; i < n; i++){
        impact[i] = leftProd;
        leftProd *= contributions[i];
    }

    // right side se prod

    int rightProd = 1;
    for(int i = n - 1; i>= 0; i--){
        impact[i] *= rightProd;
        rightProd *= contributions[i];
    }

    return impact;

}
