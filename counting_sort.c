#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    int k = INT_MIN;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > k)
            k = a[i];
    }

    int count[k + 1];

    for (int i = 0; i <= k; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[a[i]]++;

    for (int i = 1; i <= k; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--)
        b[--count[a[i]]] = a[i];

    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}