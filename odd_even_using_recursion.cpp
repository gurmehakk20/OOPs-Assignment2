#include<iostream>
using namespace std;

void print(int n, int temp){
    if (temp < 0) return;

    if (temp%2) {
		cout << temp<< endl;
    	print(n, temp - 2);
	}
	else {
		print(n, temp - 1);
	}
        
    temp++;
    if (temp <= n )
    cout << temp << endl;
}
int main()
{
    int n; 
    cin >> n;
    print(n, n);
    

    return 0;
}