#include <iostream>
using namespace std;

int EuclideanGCDRecursive(int m, int n) {
    if (n == 0) {
        return m;
    }
    return EuclideanGCDRecursive(n, m % n);
}

int main() {
    int m, n;
    cout << "Masukkan dua bilangan bulat positif: ";
    cin >> m >> n;

    int fpbRecursive = EuclideanGCDRecursive(m, n);
    cout << "FPB dengan prinsip rekursif: " << fpbRecursive << endl;

    return 0;
}