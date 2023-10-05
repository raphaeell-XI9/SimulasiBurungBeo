#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double sudut, V, g;

    g = 10.00; // g = percepatan/gravitasi bumi yaitu 10m/s^2
    
    cout << "Masukkan sudut peluncuran (derajat): ";
    cin >> sudut;
    cout << "Masukkan kecepatan awal (m/s): ";
    cin >> V;
    
    double R = (V * V * sin(2 * sudut * M_PI / 180)) / g;
    
    cout << fixed << setprecision(1) << R << " meter" << endl;
    
    return 0;
}
