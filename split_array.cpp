#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

void rec(vector<int> vec, int n, int sum, vector<int> g8, int s1, vector<int> g9, int s2, int &count, int ind) {
    if (s1 == sum && s2 == sum) {
        print(g8);
        cout << "and ";
        print(g9);
        cout << endl;
        count++;
        return;
    }

    if (ind == n) {
        return;
    }

    g8.push_back(vec[ind]);
    rec(vec, n, sum, g8, s1 + vec[ind], g9, s2, count, ind + 1);
    g8.pop_back();

    g9.push_back(vec[ind]);
    rec(vec, n, sum, g8, s1, g9, s2 + vec[ind], count, ind + 1);
    g9.pop_back();
}

int main() {
    int n;
    cin >> n;
    vector<int> vec;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        vec.push_back(e);
        sum += e;
    }
    sum /= 2;
    vector<int> g8, g9;
    int s1 = 0, s2 = 0;
    int count = 0;
    int ind = 0;
    rec(vec, n, sum, g8, s1, g9, s2, count, ind);

    cout << count;

    return 0;
}
