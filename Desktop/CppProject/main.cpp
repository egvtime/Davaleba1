#include <iostream>
#include <list>

using namespace std;

// Davaleba 1:
// int main() {
//     int a, b, c;
//     cin >> a;
//     cin >> b;
//     cin >> c;
//
//     cout << a << ", " << b << ", " << c << endl;
//     cout << "sum: " << a + b + c << endl;
//
//     a = 4*a;
//     b = b-3;
//     c = c*c;
//
//     cout << a << ", " << b << ", " << c << endl;
//     cout << "sum: " << a + b + c << endl;
//
//     return 0;
// }


// Davaleba 2
// int main() {
//     int a;
//     cin>>a;
//
//     // ver mivxvdi ras nishanvs mara
//
//     a = a*a;
//     a = a*a;
//     a = a*a;
//
//     cout << a;
//
//     return 0;
// }


// Davaleba 3
// int main() {
//     int a, b, c;
//     cin >> a; // a = 5;
//     cin >> b; // b = 7;
//     cin >> c; // c = 12;
//
//     int y = a++ + --b* ++c;
//
//     cout << y << endl;
//
//     return 0;
// }

// Davaleba 4
// int main() {
//     float c = 12;
//     float x = 5.77;
//
//     float z = pow(2, (x + sqrt(x)) / log10(c-x));
//     float y = sin(4*numbers::pi/7) + sqrt(z);
//
//     cout << y << endl;
//     return 0;
// }

//Davaleba 5
list<int> coins = {200, 100, 50, 20, 10, 5};
list<int> Amounts;

int main() {
    int change;
    cin >> change;

    for (int coin : coins) {
        Amounts.push_back(change/coin);
        cout << coin << ": " << Amounts.back() << endl;
        change = change%coin;
    }

    return 0;
}
