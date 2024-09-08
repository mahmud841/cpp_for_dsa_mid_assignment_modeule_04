#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i]; // array input nilam
        }
        // initializing boolean value as false
        bool value_found = false;

        // all combinations of 3 distinct numbers
        for (int i = 0; i < N - 2 && !value_found; i++)
        {
            for (int j = i + 1; j < N - 1 && !value_found; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        value_found = true;
                        break;
                    }
                }
            }
        }

        if (value_found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
