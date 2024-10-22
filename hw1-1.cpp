#include <iostream>
using namespace std;
int A(int m, int n) {
	if (m == 0)return (n + 1); 
	if (n == 0)return A(m - 1, 1);	//»¼°j A(m - 1, 1)
	return A(m - 1, A(m, n - 1));	//»¼°j A(m - 1, A(m, n - 1))
}
int main() {
	int m, n;
	cout << "½Ğ¿é¤J m ©M n ¡G";
	cin >> m >> n;
	cout << "A( " << m << " , " << n << " ) = " << A(m, n) << endl;
	system("pause");
	return 0;
}