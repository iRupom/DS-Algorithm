#include <bits/stdc++.h>
using namespace std;

void print(char rupom[]) {
	if (rupom[0] == '\0') {
		return;
	}
	cout << rupom[0];
	print(rupom + 1);
}

void revPrint(char rupom[]) {
	if (rupom[0] == '\0') {
		return;
	}
	revPrint(rupom + 1);
	cout << rupom[0];
}

int main(int argc, char const *argv[])
{
	char rupom[] = "Amihoilam rupom";

	print(rupom);
	cout << endl;
	revPrint(rupom);

	return 0;
}
