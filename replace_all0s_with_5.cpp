#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n; cin >> n; 
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '0') str[i] = '5';
    }
    n = stoi(str);
    cout << n;

    return 0;
}