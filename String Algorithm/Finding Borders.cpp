#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    map<int, string> front, back;
    string f = "", b = "";
    for (int i = 0; i < n / 2; i++)
    {
        f += s[i];
        b += s[n - i - 1];
        front[i + 1] = f;
        reverse(s.begin(), s.end());
        back[i] = s;
        reverse(s.begin(), s.end());
    }
    for (auto itf = back.begin(); itf != back.end(); itf++)
    {
        cout << itf->second << " ";
    }
    return 0;
}
// Code By - Jae Aeich