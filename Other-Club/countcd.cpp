
#include <bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n, bool prime[],bool primesquare[], int a[]) {


    for (int i = 2; i <= n; i++)
        prime[i] = true;


    for (int i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;

    prime[1] = false;

    for (int p = 2; p * p <= n; p++) {

        if (prime[p] == true) {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    int j = 0;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {

            a[j] = p;


            primesquare[p * p] = true;
            j++;
        }
    }
}


int countDivisors(int n) {

    if (n == 1)
        return 1;

    bool prime[n + 1], primesquare[n * n + 1];

    int a[n];

    SieveOfEratosthenes(n, prime, primesquare, a);

    int ans = 1;

    for (int i = 0;; i++) {

        if (a[i] * a[i] * a[i] > n)
            break;

        int cnt = 1;
        while (n % a[i] == 0) {
            n = n / a[i];
            cnt = cnt + 1;
        }

        ans = ans * cnt;
    }

    if (prime[n])
        ans = ans * 2;


    else if (primesquare[n])
        ans = ans * 3;


    else if (n != 1)
        ans = ans * 4;

    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countDivisors(n) << endl;
}