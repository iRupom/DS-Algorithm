#include <bits/stdc++.h>
using namespace std;

int len(char arr[]) {
	if (arr[0] == '\0') {
		return 0;
	}
	return 1 + len(arr + 1);
}

int main(int argc, char const *argv[])
{
	char arr[] = "my name is rakib";

	cout << "Lenght of the array is : " << len(arr) << endl;

	return 0;
}