/*1. �������� ��������, ��� ������� ���������� ����� � �������� ���� �� ����� ���������: 
���������� ������� ����� (���������, 3) ������ ������� ������ ������ �������� ����� �����, 
��������� ������� ������ ������ �������� ����� ����� ����������� �� 2 (����� 6 ��� ������ ��������), 
����� ������� ������ � ��������� ������� ���������� �� 2 (����� 6*2=12 ��� ������ ��������). 
��������� ����� ������� �� �����.
2. �������� ��������, ��� ������� ���������� ����� � �������� ���� �� ����� ���������: 
���������� ������� ����� (���������, 3) ������ ������� ������ ������ �������� ����� �����, 
��������� ������� ������ ������ �������� ����� ����� + 1 (����� 4 ��� ������ ��������), 
����� ������� ������ � ��������� ������� + 1 (����� 5 ��� ������ ��������). 
��������� ����� ������� �� �����.
3. ������� ���������� �����. �������� ���� ����������� ������� � ������� �� �����. 
���������� ������ ������� ������� � ��������� (����, ������, �����, ����). 
�������� �������� ������ � �������� �� ����� ��������� ���������. 
�������� �������. 
���������, ���� �� ���� ����� �����.
1 2 0 4 5 3
4 5 3 9 0 1
� ���������� ������ �������� �� 2 ������� ������, �� �� ��������:
5 3 1 2 0 4
0 1 4 5 3 9.
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
	int R;
	cout << "Oberite zadachy:\n"
		<< "1. Dvovumirnui masuv iz zbilsennam znachenn v 2 razu\n"
		<< "2. Dvovumirnui masuv iz zbilsennam znachenn na 1 raz\n"
		<< "3. Dvovumirnui masuv zi zrysennam\n";
	cin >> R;
	switch (R) {
	case 1: {
		/*1. �������� ��������, ��� ������� ���������� ����� � �������� ���� �� ����� ���������:
			 ���������� ������� ����� (���������, 3) ������ ������� ������ ������ �������� ����� �����,
			 ��������� ������� ������ ������ �������� ����� ����� ����������� �� 2 (����� 6 ��� ������ ��������),
			 ����� ������� ������ � ��������� ������� ���������� �� 2 (����� 6*2=12 ��� ������ ��������).
			 ��������� ����� ������� �� �����.*/
		const int row = 3;
		const int col = 7;
		int Arr[row][col];

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (i == 0 && j == 0) {
					cout << "\nVvedite znachenna persogo elementa: ";
					cin >> Arr[i][j];
				}
				else {
					Arr[i][j] = Arr[i][j - 1] * 2;
				}
				cout << Arr[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
		  break;
	case 2: {
		/*2. �������� ��������, ��� ������� ���������� ����� � �������� ���� �� ����� ���������:
			 ���������� ������� ����� (���������, 3) ������ ������� ������ ������ �������� ����� �����,
			 ��������� ������� ������ ������ �������� ����� ����� + 1 (����� 4 ��� ������ ��������),
			 ����� ������� ������ � ��������� ������� + 1 (����� 5 ��� ������ ��������).
			 ��������� ����� ������� �� �����.*/
		const int row = 3;
		const int col = 7;
		int Arr[row][col];

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (i == 0 && j == 0) {
					cout << "\nVvedite znachenna persogo elementa: ";
					cin >> Arr[i][j];
				}
				else {
					Arr[i][j] = Arr[i][j - 1] + 1;
				}
				cout << Arr[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
		  break;
	case 3: {
		/*3. ������� ���������� �����. �������� ���� ����������� ������� � ������� �� �����.
			 ���������� ������ ������� ������� � ��������� (����, ������, �����, ����).
			 �������� �������� ������ � �������� �� ����� ��������� ���������.
			 �������� �������.
			 ���������, ���� �� ���� ����� �����.
			 1 2 0 4 5 3
			 4 5 3 9 0 1
			 � ���������� ������ �������� �� 2 ������� ������, �� �� ��������:
			 5 3 1 2 0 4
			 0 1 4 5 3 9.*/
		srand(time(NULL));
		const int row = 4;
		const int col = 7;
		int Arr[row][col];
		int Arr2[row][col];
		int x = 0, D;

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				Arr[i][j] = rand() % 20 - 10;
				cout << Arr[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
		char s = 'a';
		int g, t, n;
		while (s != 'q') {
			cout << "Oberite napram zrysenna:\n"
				<< "r. Vpravo\n"
				<< "l. Vlivo\n"
				<< "h. Vgory\n"
				<< "n. Vnuz\n"
				<< "q. vuhid\n";
			cin >> s;
			cout << endl;
			switch (s) {
			case 'r': {
				cout << "Oberite na skilku mae bytu zdvug: ";
				cin >> x;
				for (int k = 0; k < row; k++) {
					g = x;
					t = 0;
					for (int l = 0; l < col; l++) {
						if (x == 0 || x == col) {
							cout << Arr[k][l] << ' ';
						}
						else {
							while (g > 0) {
								Arr2[k][t] = Arr[k][col - g];
								cout << Arr2[k][t] << ' ';
								g--;
								t++;
							}
							if (l + t < col) {
								Arr2[k][l + t] = Arr[k][l];
								cout << Arr2[k][l + t] << ' ';
							}
							else break;
						}
					}
					cout << endl;
				}
				cout << endl;
			}
					break;
			case 'l': {
				cout << "Oberite na skilku mae bytu zdvug: ";
				cin >> x;
				for (int k = 0; k < row; k++) {
					g = x;
					t = 0;
					for (int l = 0; l < col; l++) {
						if (x == 0 || x == col) {
							cout << Arr[k][l] << ' ';
						}
						else {
							if (l == col - x) {
								t = l;
								while (g > 0) {
									Arr2[k][t] = Arr[k][col - (l + g)];
									cout << Arr2[k][t] << ' ';
									g--;
									t++;
								}
								break;
							}
							else {
								Arr2[k][l] = Arr[k][l + x];
								cout << Arr2[k][l] << ' ';
							}
						}
					}
					cout << endl;
				}
				cout << endl;
			}
					break;
			case 'h': {
				int n = 0, k = 0;
				n = k;
				cout << "Oberite na skilku mae bytu zdvug: ";
				cin >> x;
				for (int k = 0; k < row; k++) {
					if (k + x == row) {
						n = k;
					}
					else if (k + x > row) {
						n--;
					}
					for (int l = 0; l < col; l++) {
						if (x == 0 || x == row) {
							cout << Arr[k][l] << ' ';
						}
						else {
							if (k + x < row) {
								Arr2[k][l] = Arr[k + x][l];
								cout << Arr2[k][l] << ' ';
							}
							else {
								Arr2[k][l] = Arr[row - (n + x)][l];
								cout << Arr2[k][l] << ' ';
							}
						}
					}
					cout << endl;
				}
				cout << endl;
			}
					break;
			case 'n': {
				int n = 0, k = 0;
				cout << "Oberite na skilku mae bytu zdvug: ";
				cin >> x;
				for (int k = 0; k < row; k++) {
					for (int l = 0; l < col; l++) {
						if (x == 0 || x == row) {
							cout << Arr[k][l] << ' ';
						}
						else {
							if (k <= x - 1) {
								Arr2[k][l] = Arr[(row - x) + n][l];
								cout << Arr2[k][l] << ' ';
							}
							else {
								Arr2[k][l] = Arr[k - x][l];
								cout << Arr2[k][l] << ' ';
							}
						}
					}
					if (k <= x - 1) {
						n++;
					}
					cout << endl;
				}
				cout << endl;
			}
					break;
			case 'q':break;
				break;
			default:cout << "Ne virno obranui napram zdvugy!";
			}
		}
	}
		  break;
	default:cout << "Ne virno obrana zadacha!";
	}
}