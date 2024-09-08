// #include <bits/stdc++.h>
// using namespace std;

// // create function
// int *sort_it(int N)
// {
//     static int A[100000];
//     static int A[100000];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     // sorting in descending order
//     sort(A, A + N, greater<int>());
//     return A;
// }
// // Start work in main function
// int main()
// {
//     int N;
//     cin >> N;
//     // function call
//     int *sorted_array = sort_it(N);
//     for (int i = 0; i < N; i++)
//     {
//         cout << sorted_array[i] << " ";
//     }
//     cout << endl; // Move to the next line after printing

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// function,sorting in descending,return the pointer
int *sort_it(int N)
{
    int *A = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // descending order
    sort(A, A + N, greater<int>());
    return A;
}
// main function start
int main()
{
    int N;
    cin >> N;

    // function call
    int *sortedArray = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << sortedArray[i] << " ";
    }
    cout << endl;
    delete[] sortedArray;

    return 0;
}
