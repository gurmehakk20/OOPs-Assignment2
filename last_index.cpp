#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void recursion(vector<int> vec, int ind, int target){
    if (vec[ind] == target){
        cout << ind;
        return;
    }
    if (ind < 0){
        cout << -1;
        return;
    }
    recursion(vec, ind-1, target);
}
int main()
{
    int n; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        int e; cin >> e;
        vec.push_back(e);
    }
    int target; cin >> target;

    int ind = n-1;
    recursion(vec, ind, target);

    return 0;
}