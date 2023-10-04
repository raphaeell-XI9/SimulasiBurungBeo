#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int main () {
	int luas, alas, tinggi;
	
	cout << "Masukkan alas : " <<endl;
	cin >> alas;
	cout << "Masukkan tinggi : " <<endl;
	cin >> tinggi;
	
	luas = alas * tinggi / 2;
	cout << "Jadi, luas segitiga adalah : " << luas <<endl;
	
	return 0;
}
