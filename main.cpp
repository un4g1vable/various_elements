#include <iostream>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
	const int size = 10;
	int a[size];
    int flag = 0;

    cout << "Введите элементы целочисленного массива:" "\n" << endl;
	for (int i = 0; i < size; i++){
        cout << "a[" << i << "] = ";
		cin >> a[i];}

    for (int z = 0; z < size; z++) {
        for (int j = size; j > z; --j) {
            if (a[z] == a[j]) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1) cout << "В массиве встречаются одинаковые элементы" << endl;
    else cout << "Массив уникален" << endl;
}

