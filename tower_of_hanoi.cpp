#include <iostream>
using namespace std;

void toh(int n, char source, char helper, char target) {
    // Base case
    if (n == 0) return;

    // Recursion
    toh(n - 1, source, target, helper);
    cout << "Moving ring " << n << " from " << source << " to " << target << endl;
    toh(n - 1, helper, source, target);
}

int main() {
    int n;
    cin >> n;
    toh(n, 'A', 'C', 'B');

    return 0;
}
