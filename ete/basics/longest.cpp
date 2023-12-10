#include <bits/stdc++.h>
using namespace std;
int countSegments(string s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
        {
            ans++;
        }
    }
};
int main()
{
    string s;
    cout << "Enter the string ";
    getline(cin, s);
    cout << countSegments(s);
}
