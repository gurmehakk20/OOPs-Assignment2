#include<iostream>
#include <vector>
using namespace std;

void recursion(vector<int> vec, int ind, int target, int n){
    if (ind == n) return;
    if (vec[ind] == target){
        cout << ind << " ";
    }
    
    recursion(vec, ind+1, target, n);
}

int main()
{
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        arr.push_back(e);
    }
    int m; cin >> m;
    recursion(arr, 0, m, n);


    return 0;
}