#include <iostream>
using namespace std;
void maxx(int* arr, int n) {
	int max = 0, max2 = 0, k = 0, l = 0, p = 0;
	for (int i = 0;i < n;i++) {
		if (arr[i] > max) {//if >= real max s povtoreniem
			max2 = max;
			max = arr[i];
		}

	}
	for (int i = 0;i < n;i++)
	{
		if (arr[i] == max) l++;
	}
	for (int i = 0;i < n;i++)
	{
		if (arr[i] == max2) p++;
	}
	cout << "First max= " << max << " Count max: " << l << endl;
	cout << "Second max= " << max2 << " Count max: " << p << endl;
}
int main() {
	int* a;
	int n;
	cout << "Enter the size of the array: " << endl;
	cin >> n;
	a = new int[n];
	for (int j = 0;j < n;j++) {
		cout << "arr[" << j << "]= ";
		cin >> a[j];
		cout << endl;
	}
	cout << "Array: ";
	for (int j = 0; j < n;j++)
	{
		cout << a[j] << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Finding the second maximum: " << endl;
	maxx(a, n);
	cout << endl;
	system("pause");
	return 0;
}