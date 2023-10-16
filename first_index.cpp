#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void recursion(vector<int> vec, int ind, int target, int n){
    if (vec[ind] == target){
        cout << ind;
        return;
    }
    if (ind == n){
        cout << -1;
        return;
    }
    recursion(vec, ind+1, target, n);
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

    int ind = 0;
    recursion(vec, ind, target, n);

    return 0;
}