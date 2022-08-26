#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

bool sumPos(vector<int> &v, int val)
{
    int sum = 0;
    int i = 0, j = 0;
    while (sum >= 0 && i < v.size() && j < v.size())
    {
        if (sum == val)
            break;
        if (sum < val)
        {
            sum += v[i];
            i++;
        }
        else
        {
            sum -= v[j];
            j++;
        }
    }
    return val == sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int val = 1;
    int i = 0;
    while (true)
    {
        cout << val << endl;
        if (v[i] == val)
        {
            val++;
            continue;
        }
        else if (!sumPos(v, val))
        {
            break;
        }
        val++;
        if (i != v.size() - 1)
            i++;
    }
    cout << val << endl;
    return 0;
}