#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string input, string output) {
	if (input.length() == 0) {
		if (output.length() == 0) cout << "Null" << endl;
		else cout << output << endl;
		return;
	}

	// exclude the character. that means does not include in the output string
	printSubsequences(input.substr(1), output);

	// exclude the character from the input but inlcude in the output string. that means
	// including in the output
	printSubsequences(input.substr(1), output + input[0]);
}

int main(int argc, char const *argv[])
{
	cout << "Enter the input string : " << endl;
	string input;
	string output = "";

	cin >> input;

	printSubsequences(input, output);

	return 0;
}