//HomeWork #22
#include <iostream>
using namespace std;
void func(int *n, int m) {
	int temp = *n;
	for (int i = 1; i < m; i++){
		*n *= temp;
	}
}
int main() {
	//Task 1
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "HomeWork #22.\nTask 1.\n\nThe original array:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(arr + i) << " ";
	cout << "\b]\n";
	for (int i = 0; i < 10; i++)
		if (i % 2 == 0)
			swap(*(arr + i), *(arr + i + 1));
	cout << "\nThe resulting array:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(arr + i) << " ";
	cout << "\b]\n";

	cout << "\nTask 2.\n";
	int n = 10;
	func(&n, 3);
	cout << n << endl;
	return 0;
}