#include <iostream>
using namespace std;

int main(void) {
    int n, i, j;
    int a[1001] = { 0 };
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m, tmp = 0, index = 0;
    for (i = 0; i < n - 1; i++) {
        m = a[i];
        index = i;
        for (j = i + 1; j < n; j++) {
            if (m > a[j]) {
                m = a[j];
                index = j;
            }
        }
        tmp = a[i];
        a[i] = m;
        a[index] = tmp;
    }
    int sum=0;
    for (i = n; i > 0; i--)
        for (j = 0; j < i; j++)
            sum += a[j];
    cout << sum;
}
