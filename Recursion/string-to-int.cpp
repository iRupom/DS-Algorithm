#include <bits/stdc++.h>
using namespace std;

int stringToInteger(string input, int len) {
	if (len == 0) return 0;

	int SmallAnswer = stringToInteger(input, len - 1);
	int lastDigit = input[len - 1] - '0';

	return SmallAnswer * 10 + lastDigit;
}

int main(int argc, char const *argv[])
{

	cout << "Enter a valid string that can be converted into integer :  " << endl;
	string input;
	cin >> input;
	int len = input.size();

	int ans = stringToInteger(input, len);

	cout << ans << endl;

	return 0;
}