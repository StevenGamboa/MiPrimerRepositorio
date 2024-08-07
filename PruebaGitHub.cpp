#include <iostream>
using namespace std;
#include <cstdlib>
int main()
{
	const int sizeArray = 10;
	int array[sizeArray] = {};
	int count = 0;
	for (int i = 0; i < sizeArray; i++) {
		array[i] = rand();
		cout << array[i] << endl;
		count++;
	}
	int sum = 0;
	for (int i = 0; i < sizeArray; i++) {
		sum += array[i];
	}
	float prom = 0;
	int maxNumber = 0;
	int secondMaxNumber = 0;
	for (int i = 0; i < sizeArray; i++) {
		if (array[i] > maxNumber) {
			maxNumber = array[i];
		}
		else if (array[i] < maxNumber && array[i] > secondMaxNumber) {
			secondMaxNumber = array[i];
		}
	}
	prom = sum / count;
	cout << "Suma: " << sum << endl;
	cout << "Promedio: " << prom << endl;
	cout << "Elemento mayor: " << maxNumber << endl;
	cout << "Segundo elemento mayor: " << secondMaxNumber << endl;

	static const int rows = 3;
	static const int cols = 3;
	int miMatriz[rows][cols] = {};
	for (int i = 0; i < rows; i++) {
		cout << endl;
		for (int j = 0; j < cols; j++) {
			miMatriz[i][j] = rand();
			cout << miMatriz[i][j] << "		";
		}
	}
}