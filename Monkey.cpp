#include <bits/stdc++.h>
using namespace std;

void sorted_order(string S)
{
    char ary[100000];
    int n = 0;

    // non-space characters through loop
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] != ' ')
        {
            ary[n++] = S[i];
        }
    }
    sort(ary, ary + n); // ascending order
    // Output array as a string
    for (int i = 0; i < n; i++)
    {
        cout << ary[i];
    }
    cout << endl;
}

int main()
{
    string S;
    // until EOF
    while (getline(cin, S))
    {
        sorted_order(S);
    }
    return 0;
}

//HappY Coding