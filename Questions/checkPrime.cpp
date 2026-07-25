#include <bits/stdc++.h>
using namespace std;

/*
  Prime Check Optimization (6k ± 1 Method):

  All prime numbers greater than 3 can be expressed as 6k - 1 or 6k + 1, where k is a positive integer.
  This is because:
    - Numbers of the form 6k, 6k + 2, 6k + 4 are divisible by 2.
    - Numbers of the form 6k + 3 are divisible by 3.
    - Only 6k - 1 and 6k + 1 can potentially be prime.

  In the loop:

      for (int i = 5; i * i <= n; i += 6)
          if (n % i == 0 || n % (i + 2) == 0) return false;

  We check two numbers per iteration:
    - i       → corresponds to 6k - 1
    - i + 2   → corresponds to 6k + 1

  This way, we efficiently test only possible prime divisors, skipping multiples of 2 and 3.
  As a result, the algorithm is roughly 3× faster than checking every number up to sqrt(n).
*/


// Function to check if a given number is prime
bool isPrime(int n) {
    // Handle small and special cases
    if (n <= 1) return false;
    if (n <= 3) return true;

    // Eliminate multiples of 2 and 3 early
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check divisibility from 5 to sqrt(n) using 6k ± 1 optimization
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int n = 1483;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
