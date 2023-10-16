#include<iostream>
using namespace std;

void StrToInt(string str, int &ans, int ind){
    if (ind == str.length()){
        return ;
    }

    ans = ans * 10 + (str[ind] - '0');
    StrToInt(str, ans, ind+1);
}
int main()
{
    string str;
    cin >> str;
    
    int ans = 0;
    StrToInt(str, ans, 0);

    cout << ans;


    return 0;
}