#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++){
        int e; cin >> e;
        vec.push_back(e);
    }
    int x; cin >> x;
    sort(vec.begin(), vec.end());
    int low = vec[0], high = vec[n - 1];
    int mid;
    int set; 

    while (low <= high){
        mid = (low + high) >> 1;
        long long sum = 0;

        for (int i = 0; i < n; i++){
            if (vec[i] > mid){
                sum += (vec[i] - mid);
            }
        }

        if (sum >= x){
            set = mid; 
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << set; 

    return 0;
}
