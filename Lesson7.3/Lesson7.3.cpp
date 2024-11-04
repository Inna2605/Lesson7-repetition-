/*1. У двовимірному масиві цілих чисел порахувати:
■ Суму всіх елементів масиву;
■ Середнє арифметичне всіх елементів масиву;
■ Мінімальний елемент;
■ Максимальний елемент.
2. У двовимірному масиві цілих чисел порахувати суму елементів: 
у кожному рядку; у кожному стовпці; одночасно по всіх рядках і всіх стовпцях. 
Оформити в такий спосіб:
 3 5 6 7 | 21
12 1 1 1 | 15
 0 7 12 1 | 20
--------------------
15 3 19 9 | 56
3. Напишіть програму, у якій оголошується масив розміром 5х10 і масив розміром 5х5. 
Перший масив заповнюється випадковими числами в діапазоні від 0 до 50. 
Другий масив заповнюється за таким принципом: 
перший елемент другого масиву дорівнює сумі першого і другого елементу першого масиву, 
другий елемент другого масиву дорівнює сумі третього та четвертого елемента першого масиву.*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int a;
	cout << "Oberite zadachy:\n"
		<< "1. Arefmetucni dii z elementamu dvovumirnogo masuvy\n"
		<< "2. Oformlenna arefmetuchnux dii v dvovumirnomy masuvi\n"
		<< "3. Zapovnenna drygogo masuvy\n";
	cin >> a;
	switch (a) {
	case 1: {
		/*1. У двовимірному масиві цілих чисел порахувати:
             ■ Суму всіх елементів масиву;
             ■ Середнє арифметичне всіх елементів масиву;
             ■ Мінімальний елемент;
             ■ Максимальний елемент.*/
		
		const int row = 4;
		const int col = 7;
		int Arr[row][col];
		int Sum = 0, Min = 0, Max = Arr[0][0], N = 0;
		float SA = 0;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				Arr[i][j] = rand() % 30 - 15;
				if (Arr[i][j] >= Max) {
					Max = Arr[i][j];
				}
				if (Arr[i][j] <= Min) {
					Min = Arr[i][j];
				}
				Sum += Arr[i][j];
				cout << Arr[i][j] << ' ';
				N++;
			}
			cout << endl;
		}
		cout << "\nSuma vsix elementiv dorivnye: " << Sum
			<< "\nSeredne arefmetuchne vsix elementiv dorivnue: " << float(Sum) / N
			<< "\nMinimalnui element v masuvi: " << Min
			<< "\nMaksumalnui element v masuvi: " << Max << endl;
	}break;
	case 2: {
		/*2. У двовимірному масиві цілих чисел порахувати суму елементів: 
             у кожному рядку; у кожному стовпці; одночасно по всіх рядках і всіх стовпцях. 
             Оформити в такий спосіб:
             3 5 6 7 | 21
             12 1 1 1 | 15
             0 7 12 1 | 20
             --------------------
             15 3 19 9 | 56*/
		const int row = 3;
		const int col = 7;
		int Arr[row][col];
		int Sumi, Sumj = 0, Sum = 0;
		
			for (int i = 0; i < row; i++) {
				Sumi = 0;
				for (int j = 0; j < col; j++) {
					Arr[i][j] = rand() % 50 - 25;
					cout << Arr[i][j] << ' ';
					Sumi += Arr[i][j];
					if (j == col - 1) {
						cout << " | " << Sumi;
					}
					Sum += Arr[i][j];
				}
				cout << endl;
			}
			cout << "------------------------------\n";
			for (int k = 0; k <= col; k++) {
				Sumj = 0;
				for (int i = 0; i < row; i++) {
					for (int j = 0; j < col; j++) {
						if (k == j) {
							Sumj += Arr[i][j];
						}
					}
				}
				if (k == col) {
					cout << " | " << Sum;
				}
				else {
					cout << Sumj << ' ';
				}
			}
			cout << endl;
	}break;
	case 3: {
		/*3. Напишіть програму, у якій оголошується масив розміром 5х10 і масив розміром 5х5. 
             Перший масив заповнюється випадковими числами в діапазоні від 0 до 50. 
             Другий масив заповнюється за таким принципом: 
             перший елемент другого масиву дорівнює сумі першого і другого елементу першого масиву, 
             другий елемент другого масиву дорівнює сумі третього та четвертого елемента першого масиву.*/
		const int row = 5;
		const int col1 = 10;
		const int col2 = 5;
		int Arr1[row][col1], Arr2[row][col2];
		int n = 0;
		cout << "Persui masuv:\n";
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col1; j++) {
				Arr1[i][j] = rand() % 50;
				cout << Arr1[i][j] << ' ';
			}
			cout << endl;
		}
		cout << "\nDrygui masuv:\n";
		for (int i = 0; i < row; i++) {
			n = 0;
			for (int j = 0; j < col1; j += 2) {
				Arr2[i][n] = Arr1[i][j] + Arr1[i][j + 1];
				cout << Arr2[i][n] << ' ';
				n++;
			}
			cout << endl;
		}
		cout << endl;
	}break;
	default:cout << "Ne virno obrana zadacha!";
	}
}