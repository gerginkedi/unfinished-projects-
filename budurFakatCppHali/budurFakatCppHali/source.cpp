#include <iostream>
using namespace std;

int main() {
	string x;
	//char budur[4] = { 'g', 'a', 't', 'o' };

	cout << "enter ur password" << "\n";
	cin >> x;

	string password = "123";
	if (x == password)
	{
		cout << "welcome";
	}
	else
	{
		cout << "password is incorrect";
	};
	return 0;
}