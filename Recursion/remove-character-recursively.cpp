#include <bits/stdc++.h>
using namespace std;

void removeChar(char arr[], char x) {
	if (arr[0] == '\0') {
		return;
	}

	if (arr[0] != x) {
		removeChar(arr + 1, x);
	}

	if (arr[0] == x) {
		for (int i = 0; arr[i] != '\0'; i++) {
			arr[i] = arr[i + 1];
		}

		removeChar(arr, x);
	}
}

int main(int argc, char const *argv[])
{
	cout << "Enter the char array : " << endl;

	char arr[80];
	cin >> arr;

	cout << "Enter the character you want to remove : " << endl;

	char x;
	cin >> x;

	removeChar(arr, x);

	cout << arr << endl;


	return 0;
}