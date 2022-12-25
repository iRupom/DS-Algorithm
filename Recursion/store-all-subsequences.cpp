#include <bits/stdc++.h>
using namespace std;

void storeAllSubsequences(string input, string output, vector<string> &ans) {
	if (input.size() == 0) {
		ans.push_back(output);
		return;
	}

	storeAllSubsequences(input.substr(1), output, ans);
	storeAllSubsequences(input.substr(1), output + input[0], ans);
}

int main(int argc, char const *argv[])
{
	cout << "Enter the input string : " << endl;
	string input;
	string output = "";
	vector<string> ans;

	cin >> input;

	storeAllSubsequences(input, output, ans);

	for (int i = 0; i < ans.size(); i++) {
		if (ans[i].size() == 0) cout << "NULL" << endl;
		else cout << ans[i] << endl;
	}

	return 0;
}