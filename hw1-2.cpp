#include <iostream>
using namespace std;
int A(int m, int n) {
	int a[1000] = { 0 }, b[1000] = { 0 };
	int Top_a = 0, Top_b = 0;
	a[Top_a++] = m;
	b[Top_b++] = n;

	while (Top_a != 0) {
		if (m == 0) {			// m == 0
			n = n + 1;				
			while ((Top_a != 0) && (b[Top_b - 1] != -1)) {
				a[Top_a--] = 0;
				b[Top_b--] = 0;
			}
			if (Top_a != 0) {
				m = a[Top_a - 1];
				b[Top_b - 1] = n;
			}
		}
		while (m != 0) {		// m > 0 ���ư� ���� m == 0
			if (n == 0) {		// n == 0
				m--;
				n = 1;
				a[Top_a++] = m;
				b[Top_b++] = n;
			}
			else {				//n > 0
				n--;
				a[Top_a++] = m - 1;
				b[Top_b++] = -1;
			}
		}
	}
	return n;
}
int main() {
	int m, n;
	cout << "�п�J m �M n �G";
	cin >> m >> n;
	cout << "A( " << m << " , " << n << " ) = " << A(m, n) << endl;
	system("pause");
	return 0;
}