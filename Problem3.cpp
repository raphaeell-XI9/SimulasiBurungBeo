#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

    double s, v, t;

    //Percepatan gravitasi
    const double g = 10.00;

    cin >> s >> v >> t;

    //Konversi (s) ke radian
    double sRad = ((M_PI / 180.0) * s);

    double Vy = v * sin (sRad);

    //rumus yMax
    double ymax = (Vy * Vy) / (2 * g);
    
    if (ymax >= t) {
        cout << "Status : 1" <<endl;
    } else {
        cout << "Status : 0" <<endl;
    }

    cout << fixed << setprecision(2) << ymax <<endl;

    return 0;

}