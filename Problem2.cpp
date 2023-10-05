#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//rumus : t = 2⋅V⋅sin(S) / g

float v, S, t, g;

int main () {
    float g = 10.00;

    cout << "Masukkan sudut peluncuran : " <<endl;
    cin >> S;
    cout << "Masukkan kecepatan awal : " <<endl;
    cin >> v;

    t = (2 * v) * sin(S * M_PI / 180) / g;

    cout << t <<endl;

    return 0;
}