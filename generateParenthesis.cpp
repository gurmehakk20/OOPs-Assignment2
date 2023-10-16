#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string ele, int left, int right, int n, vector<string> &ans) {
    if (left == n && right == n) {
        ans.push_back(ele);
        return;
    }
    
    if (right < left) {  
        solve(ele + ')', left, right + 1, n, ans);
    }
	if (left < n) {
        solve(ele + '(', left + 1, right, n, ans);
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> ans;
    solve("", 0, 0, n, ans);


    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
