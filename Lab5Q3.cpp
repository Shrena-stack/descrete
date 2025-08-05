#include <iostream>
using namespace std;
long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) { 
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}

bool isPrimeFermat(int p, int a = 2) {
    if (p <= 1) return false;
    if (p == 2) return true;
    if (powerMod(a, p - 1, p) != 1)
        return false;
    return true; 
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPrimeFermat(number))
        cout << number << " is probably prime (Fermat test)." << endl;
    else
        cout << number << " is not prime." << endl;
    return 0;
}
