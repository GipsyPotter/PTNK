#include <bits/stdc++.h>
#define int long long
#define task "Divisions_Fermat."

using namespace std;

// Sàng lọc số nguyên tố.
vector < int > eratosthenes_sieve(int max_value)
{
    vector < bool > is_prime(max_value + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= max_value; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= max_value; j += i)
                is_prime[j] = false;

    vector < int > primes;
    for (int i = 2; i <= max_value; ++i)
        if (is_prime[i])
            primes.push_back(i);

    return primes;
}

void solution(int n)
{
    // Sàng lọc các số nguyên tố từ 1 tới 10^6 (bằng với n^(1/3) trong trường hợp lớn nhất).
    vector < int > primes = eratosthenes_sieve(1000000);

    // Tính F(x) với x bao gồm tất cả các thừa số nguyên tố nhỏ hơn hoặc bằng n^(1/3). Lưu luôn F(x) vào res.
    long long res = 1;
    for (int p: primes)
    {
        if (p * p * p > n)
            break;

        int cnt = 0;
        while (n % p == 0)
        {
            n /= p;
            ++cnt;
        }

        res *= (cnt + 1);
    }

    // Tính F(y) với y bao gồm tất cả các thừa số nguyên tố lớn hơn n^(1/3). Chắc chắn y chỉ có thể ở một trong ba
    // trường hợp: là số nguyên tố, là bình phương một số nguyên tố hoặc là tích của hai số nguyên tố phân biệt.
    if (fermat_checking(n))
        res *= 2LL;
    else
    {
        int squaroot = sqrt(n);
        if (squaroot * squaroot == n && fermat_checking(squaroot))
            res *= 3;
        else if (n != 1)
            res *= 4;
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    solution(n);

    return 0;
}