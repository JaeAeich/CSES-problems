#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    k--;
    int i = 0;
    while (v.size())
    {
        i = (i + k) % n;
        cout << v[i] << " ";
        vector<int> temp;
        for (int j = i + 1; i < v.size(); i++)
        {
            temp.push_back(v[i]);
        }
        v.resize(i - 1);
        for (int j = 0; i < temp.size(); j++)
        {
            v.push_back(temp[j]);
        }
        i++;
    }
    return 0;
}
// Code By - Jae Aeich