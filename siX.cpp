#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//1 task
	/*int a[5][5];
	int b;
	cin >> b;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = b;
			b *= 2;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(10) << a[i][j];
		}
		cout << endl;
	}*/


	//2 task
	/*int a[5][5];
	int b;
	cin >> b;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = b;
			b++;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(10) << a[i][j];
		}
		cout << endl;
	}*/


	//3 task
	srand(time(0));
	int a[2][5];
	int g[2][5];
	int b;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = rand() % 10;
			g[i][j] = a[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
	cin >> b;
	int f = 0;
	for (int i = 0; i < 3; i++) {
		f = 0;
		for (int j = 4-b+1; j < 5; j++) {
			g[i][f] = a[i][j];
			f++;
		}
	}
	f = 0;
	for (int i = 0; i < 3; i++) {
		f = 0;
		for (int j = b; j < 5; j++) {
			g[i][j] = a[i][f];
			f++;
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			cout << " " << g[i][j];
		}
		cout << endl;
	}
}