#include <iostream>
using namespace std;
int main()
{
	int num, n;
	cout << "Enter a number :	";
	cin >> num;
	cout << "Enter bit number :	";
	cin >> n;
	cout << "Answer :	" << (1 & (num >> (n-1)));
}
