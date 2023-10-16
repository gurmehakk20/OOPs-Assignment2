#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> vec, int sum, int target, vector<int> ans, int &total, int curr, int n) {
    if (curr == n) {
        if (sum == target) {
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            cout << " ";  
            total++;
        }
        return;
    }

    ans.push_back(vec[curr]);
    subset(vec, sum + vec[curr], target, ans, total, curr + 1, n);
    ans.pop_back();

    subset(vec, sum, target, ans, total, curr + 1, n);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        vec.push_back(e);
    }

    int target;
    cin >> target;
    vector<int> ans;
    int total = 0;
    subset(vec, 0, target, ans, total, 0, n);
    cout << endl << total;

    return 0;
}
