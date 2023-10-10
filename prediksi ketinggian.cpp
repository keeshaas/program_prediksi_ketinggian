#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int status;
    int s;
    int v;
    double t;
    double sinA;

	cout << "Masukkan nilai sudut peluncuran : ";
    cin >> s;
    cout << "Masukkan nilai kecepatan : ";
    cin >> v;
    cout << "Masukkan nilai ketinggian : ";
    cin >> t;
    sinA = sin((double) (s * 22) / 7 / 180);
    t = pow(v, 2) * pow(sinA, 2) / 20;
    cout << "Prediksi ketinggian yang dicapai : ";
    cout << fixed << setprecision (1) << t << endl;
    return 0;
}
