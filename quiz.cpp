#include <iostream>
using namespace std;

int EuclideanGCDBasic(int m, int n) {
    int r = m % n;
    while (r != 0) {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}

int main() {
    int m, n;
    cout << "Masukkan dua bilangan bulat positif: ";
    cin >> m >> n;

    int fpbBasic = EuclideanGCDBasic(m, n);
    cout << "FPB dengan prinsip dasar adalah: " << fpbBasic << endl;

    return 0;
}


