#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long N, Q, S, T, K;
    char c;

    scanf("%ld %ld\n", &N, &Q);
    long long cows[N];

    for (long long i = 0; i < N; i++)
    {
        scanf("%ld\n", &cows[i]);
    }

    for (long long i = 0; i < Q; i++)
    {

        scanf("%c", &c);

        if (c == 'M')
        {
            long long i, X;
            scanf("%ld %ld\n", &i, &X);
            cows[i - 1] = X;
        }
        else
        {

            scanf("%ld %ld %ld\n", &S, &T, &K);

            long long count = count_if(cows + S - 1, cows + T, [K](long long x)
                                 { return x <= K; });

            printf("%ld\n", count);
        }
    }

    return 0;
}