void subsetSums(int arr[], int n, int ans)
{
    // There are total 2^n subsets
    long long c = 0;
    long long total = 1 << n;
 
    // Consider all numbers from 0 to 2^n - 1
    for (long long i = 0; i < total; i++) {
        long long sum = 0;
 
        // Consider binary representation of
        // current i to decide which elements
        // to pick.
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
                sum += arr[j];
 
        // Print sum of picked elements.
        if (ans == sum) {
            cout << "YES";
            c++;
            break;
        }
    }

    if (c == 0) {
        cout << "NO";
    } 
}

int main () {
    int ans, n;
    scanf("%d", &ans);
    scanf("%d", &n);
    int ns