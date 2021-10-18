/*
#include <iostream>
#include <cstdlib>
int Ev1(int a, int b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	return a + b;
}


int Ev2(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
		return a;
	}

using namespace std;
int main() {
	setlocale(0, "");
	cout << "Пожалуйста, введите числа a и b для нахождения НОД при помощи алгоритма Евклида" << endl;
	int a, b;
	if (cin >> a >> b && a > 0 && b > 0) {
		cout << Ev1(a, b) << endl;
		cout << Ev2(a, b) << endl;
	}
	else {
		cout << "Введите натуральные числа.";
	}
}
*/
/*
#include <iostream>
#include <cstdlib>
#include <vector>
int main() {
	using namespace std;
	setlocale(0, "");
	vector <int> Erato{0, 1};
	double n1;
	int n;
	cout << "Введите число n, чтобы найти все простые числа в диапазоне [2:n]" << endl;
	if (cin >> n1) {
		n = n1;
		if (n1 - n == 0 && n1 > 0) {
			for (int i = 2; i < n + 1; i++) {
				Erato.push_back(i);
			}
			for (int i = 2; i < n + 1; i++) {
				for (int j = i + i; j < n + 1; j += i) {
					Erato[j] = 0;
				}
			}
			for (int i = 2; i < n + 1; i++) {
				if (Erato[i] != 0) {
					cout << Erato[i] << " ";
				}
			}
		}
		else {
			cout << "Введите натуральное число n.";
		}
	}
	else {
		cout << "Введите натуральное число n.";
	}
}
*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;
int Factorial(int k) {
	if (k == 1) {
		return 1;
	}
	else {
		return k * Factorial(k - 1);
	}
}
double d2(int k) {
	double ans = 0;
	for (double i = 1; i < k + 1; i++) {
		ans += (1 / i);
	}
	return ans;
}
int main() {
	setlocale(0, "");
	double n1;
	int n;
	cout << "Введите число n для вычисления значения функции." << endl;
	if (cin >> n1) {
		n = n1;
		if (n - n1 == 0 && n1 > 0) {
			cout << "Значение функции равно " << Factorial(n1) / d2(n1);
		}
		else {
			cout << "Введите натуральное число.";
		}
	}
	else {
		cout << "Введите натуральное число.";
	}
}
*/
/*
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main() {
	setlocale(0, "");
	double n;
	int n1;
	double ans = 0, answer = 0;
	cout << "Пожалуйста, введите число n для вычисления значения функции." << endl;
	if (cin >> n) {
		n1 = n;
		if (n1 - n == 0 && n1 > 0) {
			for (int i = 1; i < n + 1; i++) {
				for (int j = 1; j < i + 1; j++) {
					ans += sin(j);
				}
				answer += (i/ ans);
				ans = 0;
			}
			cout << answer;
		}

	}
}
*/
