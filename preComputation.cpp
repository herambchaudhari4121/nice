//* Pre computation means to compute the data before the execution of main program so that we don't have to compute data repeatedly.
//? QUESTION:
//? Given T test cases and in each test case a number N. Print its factorial for each test case % M where M = 10^9 + 7.
//? CONSTRAINTS:
//? 1 <= T <= 10^5
//? 1 <= N <= 10^5

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;

//? WITHOUT USING PRE COMPUTATION
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long fact = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             fact = (fact * i) % M;
//         }
//         cout << fact << endl;
//     }
//     return 0;
// }
//? In the above method the time complexity will be O(T*N) = O(N^2) = 1e10.
//! Therefore the above code will show time limit exceeded and will not run in 1 second.

//* Now suppose in above example for different test cases we might have to calculate factorial of 100 more than once, so it will consume more time. Better approach is to compute all the factorials single time and then print all of according to the one which is asked in the test case.
//? USING PRE COMPUTATION
long long fact[N];
int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % M;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
    return 0;
}
//? Time complexity for above code will be O(N) + O(T) == O(N). This will work in 1 second.