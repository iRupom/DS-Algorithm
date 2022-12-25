#include <bits/stdc++.h>
using namespace std;

void removeConDuplicate(char arr[]) {
	if (arr[0] == '\0') {
		return;
	}

	if (arr[0] == arr[1]) {
		for (int i = 0; arr[i] != '\0'; i++) {
			arr[i] = arr[i + 1];
		}
		removeConDuplicate(arr);
	}
	else {
		removeConDuplicate(arr + 1);
	}
}

int main(int argc, char const *argv[])
{
	cout << "Enter the character array : " << endl;
	char arr[80];
	cin >> arr;

	removeConDuplicate(arr);

	cout << arr << endl;

	return 0;
}