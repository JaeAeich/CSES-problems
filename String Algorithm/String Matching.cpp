#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Time complexity -O(N)
int main()
{
    string s, k;
    ll c = 0;
    getline(cin, s);
    getline(cin, k);
    ll length = s.length();
    ll len = k.length();
    ll j = 0;
    cout << length - len + 1 << endl;
    // string temp = "";
    for (ll i = 0; s[i] != '\0'; i++)
    {
        // If ith char is same as first char of k, then check if rest are equal too.
        if (s[i] == k[j])
        {
            ll ai = i;
            while (s[ai] == k[j] && ai < length && j < len)
            {
                ai++;
                j++;
            }
            // If all where equal then increment counter.
            if (j == len)
            {
                c++;
            }
            // Else check the next char of s for possible answer.
            j = 0;
        }
        // temp += s[i];
    }
    // cout << (temp == s) << endl;
    cout << c;
    return 0;
}
// Code By - Jae Aeich