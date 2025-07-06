//Problem Name: Ali baba and Puzzles
//Course Title: Competitive Programming Sessional
//Course Code: CCE-2310
//Course Teacher Name: Mirza Raquib
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b - c == d || a + b * c == d || a - b + c == d || a - b * c == d || a * b + c == d || a * b - c == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
