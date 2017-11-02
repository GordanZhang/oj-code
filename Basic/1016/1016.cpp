#include <string>
#include <iostream>
using namespace std;
int main() {
    string a, b;
    int m, n;
    cin >> a >> m >> b >> n;
    int lena = a.length();
    int lenb = b.length();
    int counta = 0;
    int countb = 0;
    for (int i = 0; i < lena; i++) {
        if (m == (a[i] - '0'))
            counta++;
    }
    for (int i = 0; i < lenb; i++) {
        if (n == (b[i] - '0'))
            countb++;
    }
    int ta = 0;
    int tb = 0;
    if (counta != 0) {
        ta = m;
    }
    if (countb != 0) {
        tb = n;
    }
    for (int i = 1; i < counta; i++) {
        ta = 10 * ta + m;
    }
    for (int i = 1; i < countb; i++) {
        tb = 10 * tb + n;
    }
    cout << ta + tb;
    return 0;
}
