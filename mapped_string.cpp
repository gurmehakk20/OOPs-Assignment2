#include <iostream>
#include <string>

using namespace std;

void func(string n, string ans, int ind) {
    if (ind == n.length()) {
        cout << ans << endl;
        return;
    }

    char c = n[ind] - '1' + 'A';
    func(n, ans + c, ind + 1);

    if (ind + 1 < n.length()) {
        string curr = n.substr(ind, 2);

        int num = stoi(curr);
        if (num >= 10 && num <= 26) {
            char c2 = num + 'A' - 1;
            func(n, ans + c2, ind + 2);
        }
    }
}

int main() {
    int num;
    cin >> num;
    string n = to_string(num);

    string ans = "";
    string curr = "";  
    func(n, ans, 0);

    return 0;
}
